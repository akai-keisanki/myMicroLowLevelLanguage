#include "../include/interpreter.h"

signed int interpret_assignment(struct storage_data *data, const unsigned char op[4]);
signed int interpret_mathematical(struct storage_data *data, const unsigned char op[4]);
signed int interpret_memory_op(struct storage_data *data, const unsigned char op[4]);

signed int interpret(struct storage_data *data, const unsigned char op[4])
{
  switch (op[0] >> 4)
  {
    case 0x1:
      return interpret_assignment(data, op);
    case 0x2:
      return interpret_mathematical(data, op);
    case 0x3:
      return interpret_memory_op(data, op);
    default:
      return 0;
  }
}

signed int interpret_assignment(struct storage_data *data, const unsigned char op[4])
{
  switch (op[0] % 0x10)
  {
  default:
    return 0;
  }
}

signed int interpret_mathematical(struct storage_data *data, const unsigned char op[4])
{
  switch (op[0] % 0x10)
  {
  default:
    return 0;
  }
}

signed int interpret_memory_op(struct storage_data *data, const unsigned char op[4])
{
  switch (op[0] % 0x10)
  {
  default:
    return 0;
  }
}

