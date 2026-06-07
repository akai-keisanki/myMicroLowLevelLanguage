#include "interpreter.h"
#include "assignment_ops.h"
#include "mathematical_ops.h"
#include "bitwise_ops.h"
#include "memory_ops.h"

signed int interpret_assignment_op(struct program_state *program, FILE *input);
signed int interpret_mathematical_op(struct program_state *program, FILE *input);
signed int interpret_bitwise_op(struct program_state *program, FILE *input);
signed int interpret_memory_op(struct program_state *program, FILE *input);

signed int interpret_op(struct program_state *program, FILE *input)
{
  const b8_t op;
  op = input_get_8b(input);
  switch (op / 0x20)
  {
    case 0x0:
      return interpret_assignment_op(program, input, op % 0x20);
    case 0x1:
      return interpret_mathematical_op(program, input, op % 0x20);
    case 0x2:
      return interpret_bitwise_op(program, input, op % 0x20);
    case 0x3:
      return interpret_memory_op(program, input, op % 0x20);
    default:
      return -1;
  }
}

signed int interpret_assignment_op(struct program_state *program, FILE *input, const b8_t op)
{
  switch (op / 4)
  {
  case 0x0:
    const b8_t reg_idxs = input_get_8b(input);
    switch (op % 4)
    {
    case 0x0:
      assign_reg2reg_8b(program, reg_idxs / 0x10, reg_idxs % 0x10);
    case 0x1:
      assign_reg2reg_16b(program, reg_idxs / 0x10, reg_idxs % 0x10);
    case 0x2:
      assign_reg2reg_32b(program, reg_idxs / 0x10, reg_idxs % 0x10);
    case 0x3:
      assign_reg2reg_64b(program, reg_idxs / 0x10, reg_idxs % 0x10);
    default:
      return -12
    }
    return 0;
  case 0x1:
    const b64_t src_mem_idx = input_get_64b(input);
    const b8_t dst_reg_idx = input_get_8b(input);
    switch (op % 4)
    {
    case 0x0:
      assign_mem2reg_8b(program, src_mem_idx, dst_reg_idx);
    case 0x1:
      assign_mem2reg_16b(program, src_mem_idx, dst_reg_idx);
    case 0x2:
      assign_mem2reg_32b(program, src_mem_idx, dst_reg_idx);
    case 0x3:
      assign_mem2reg_64b(program, src_mem_idx, dst_reg_idx);
    default:
      return -12
    }
    return 0;
  case 0x2:
    const b8_t src_reg_idx = input_get_8b(input);
    const b64_t dst_mem_idx = input_get_64b(input);
    switch (op % 4)
    {
    case 0x0:
      assign_reg2mem_8b(program, src_reg_idx, dst_mem_idx);
    case 0x1:
      assign_reg2mem_16b(program, src_reg_idx, dst_mem_idx);
    case 0x2:
      assign_reg2mem_32b(program, src_reg_idx, dst_mem_idx);
    case 0x3:
      assign_reg2mem_64b(program, src_reg_idx, dst_mem_idx);
    default:
      return -12
    }
    return 0;
  case 0x3:
    const b64_t src_mem_idx = input_get_64b(input);
    const b64_t dst_mem_idx = input_get_64b(input);
    switch (op % 4)
    {
    case 0x0:
      assign_mem2mem_8b(program, src_mem_idx, dst_mem_idx);
    case 0x1:
      assign_mem2mem_16b(program, src_mem_idx, dst_mem_idx);
    case 0x2:
      assign_mem2mem_32b(program, src_mem_idx, dst_mem_idx);
    case 0x3:
      assign_mem2mem_64b(program, src_mem_idx, dst_mem_idx);
    default:
      return -12
    }
    return 0;
  default:
    return -2;
  }
}

signed int interpret_mathematical_op(struct program_state *program, FILE *input, const b8_t op)
{
  switch (op)
  {
  default:
    return -3;
  }
}

signed int interpret_bitwise_op(struct program_state *program, FILE *input, const b8_t op)
{
  switch (op)
  {
  default:
    return -4;
  }
}

signed int interpret_memory_op(struct program_state *program, FILE *input, const b8_t op)
{
  switch (op)
  {
  default:
    return -5;
  }
}

