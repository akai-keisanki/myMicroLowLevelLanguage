#include <stdio.h>
#include <string.h>
#include "../include/storage.h"
#include "../include/interpreter.h"

const unsigned long int MAX_INPUT_FILE_COUNT = 0x10;

signed int main(const unsigned int argc, const signed char **argv)
{
  unsigned long int input_files_count = 0;
  const char *input_files[MAX_INPUT_FILE_COUNT];
  struct storage_data* data = init_storage_data();

  for (unsigned int i = 0; i < argc; ++i)
    switch (*argv[i])
    {
    case '<':
      if (input_files_count >= MAX_INPUT_FILE_COUNT)
        break;
      input_files[input_files_count++] = argv[i] + 1;
      break;
    }

  for (unsigned int i = 0; i < input_files_count; ++i)
  {
    FILE *input_file = fopen(input_files[i], "rb");
    unsigned char op[4];
    while (fread(op, sizeof(unsigned char), 4, input_file))
      if (interpret(data, op))
        return -1;
    fclose(input_file);
  }

  free_storage_data(data);

  return 0;
}
