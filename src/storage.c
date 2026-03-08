#include "../include/storage.h"

#include <stdlib.h>

struct storage_data
{
  unsigned char use_reg[0x10];
  unsigned char memory[MEMORY_SIZE];
};

struct storage_data *init_storage_data(void)
{
  struct storage_data *storage = malloc(sizeof(struct storage_data));
  return storage;
}

void free_storage_data(struct storage_data *storage)
{
  free(storage);
}
