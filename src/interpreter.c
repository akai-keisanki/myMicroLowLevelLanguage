#include "../include/interpreter.h"
#include "../include/assignment_ops.h"
#include "../include/mathematical_ops.h"
#include "../include/bitwise_ops.h"
#include "../include/memory_ops.h"

signed int interpret_assignment_op(struct storage_data *data, const unsigned char op[4]);
signed int interpret_mathematical_op(struct storage_data *data, const unsigned char op[4]);
signed int interpret_bitwise_op(struct storage_data *data, const unsigned char op[4]);
signed int interpret_memory_op(struct storage_data *data, const unsigned char op[4]);

signed int interpret_op(struct storage_data *data, const unsigned char op[4])
{
  switch (op[0] >> 4)
  {
    case 0x1:
      return interpret_assignment_op(data, op);
    case 0x2:
      return interpret_mathematical_op(data, op);
    case 0x3:
      return interpret_bitwise_op(data, op);
    case 0x4:
      return interpret_memory_op(data, op);
    default:
      return 0;
  }
}

signed int interpret_assignment_op(struct storage_data *data, const unsigned char op[4])
{
  switch (op[0] % 0x10)
  {
  default:
    return 0;
  }
}

signed int interpret_mathematical_op(struct storage_data *data, const unsigned char op[4])
{
  switch (op[0] % 0x10)
  {
  default:
    return 0;
  }
}

signed int interpret_bitwise_op(struct storage_data *data, const unsigned char op[4])
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

