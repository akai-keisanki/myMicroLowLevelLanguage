#include "assignment_ops.h"

void assign_reg2reg_8b(struct program_state *program, b8_t src_reg_idx, b8_t dst_reg_idx)
{
  storage_set_register_8b(program_sorage(program), dst_reg_idx, storage_get_register_8b(program_storage(program), src_reg_idx));
}

void assign_reg2reg_16b(struct program_state *program, b8_t src_reg_idx, b8_t dst_reg_idx)
{
  storage_set_register_16b(program_sorage(program), dst_reg_idx, storage_get_register_16b(program_storage(program), src_reg_idx));
}

void assign_reg2reg_16b(struct program_state *program, b8_t src_reg_idx, b8_t dst_reg_idx)
{
  storage_set_register_16b(program_sorage(program), dst_reg_idx, storage_get_register_16b(program_storage(program), src_reg_idx));
}

void assign_reg2reg_32b(struct program_state *program, b8_t src_reg_idx, b8_t dst_reg_idx)
{
  storage_set_register_32b(program_sorage(program), dst_reg_idx, storage_get_register_32b(program_storage(program), src_reg_idx));
}

void assign_mem2reg_8b(struct program_state *program, b64_t src_mem_idx, b8_t dst_reg_idx)
{
  storage_set_register_8b(program_sorage(program), dst_reg_idx, storage_get_memory_8b(program_storage(program), src_mem_idx));
}

void assign_mem2reg_16b(struct program_state *program, b64_t src_mem_idx, b8_t dst_reg_idx)
{
  storage_set_register_16b(program_sorage(program), dst_reg_idx, storage_get_memory_16b(program_storage(program), src_mem_idx));
}

void assign_mem2reg_32b(struct program_state *program, b64_t src_mem_idx, b8_t dst_reg_idx)
{
  storage_set_register_32b(program_sorage(program), dst_reg_idx, storage_get_memory_32b(program_storage(program), src_mem_idx));
}

void assign_mem2reg_64b(struct program_state *program, b64_t src_mem_idx, b8_t dst_reg_idx)
{
  storage_set_register_64b(program_sorage(program), dst_reg_idx, storage_get_memory_64b(program_storage(program), src_mem_idx));
}

void assign_reg2mem_8b(struct program_state *program, b8_t src_reg_idx, b64_t dst_mem_idx)
{
  storage_set_memory_8b(program_sorage(program), dst_mem_idx, storage_get_register_8b(program_storage(program), src_reg_idx));
}

void assign_reg2mem_16b(struct program_state *program, b8_t src_reg_idx, b64_t dst_mem_idx)
{
  storage_set_memory_16b(program_sorage(program), dst_mem_idx, storage_get_register_16b(program_storage(program), src_reg_idx));
}

void assign_reg2mem_32b(struct program_state *program, b8_t src_reg_idx, b64_t dst_mem_idx)
{
  storage_set_memory_32b(program_sorage(program), dst_mem_idx, storage_get_register_32b(program_storage(program), src_reg_idx));
}

void assign_reg2mem_64b(struct program_state *program, b8_t src_reg_idx, b64_t dst_mem_idx)
{
  storage_set_memory_64b(program_sorage(program), dst_mem_idx, storage_get_register_64b(program_storage(program), src_reg_idx));
}

void assign_mem2mem_8b(struct program_state *program, b64_t src_mem_idx, b64_t dst_mem_idx)
{
  storage_set_memory_8b(program_sorage(program), dst_mem_idx, storage_get_memory_8b(program_storage(program), src_mem_idx));
}

void assign_mem2mem_16b(struct program_state *program, b64_t src_mem_idx, b64_t dst_mem_idx)
{
  storage_set_memory_16b(program_sorage(program), dst_mem_idx, storage_get_memory_16b(program_storage(program), src_mem_idx));
}

void assign_mem2mem_32b(struct program_state *program, b64_t src_mem_idx, b64_t dst_mem_idx)
{
  storage_set_memory_32b(program_sorage(program), dst_mem_idx, storage_get_memory_32b(program_storage(program), src_mem_idx));
}

void assign_mem2mem_64b(struct program_state *program, b64_t src_mem_idx, b64_t dst_mem_idx)
{
  storage_set_memory_64b(program_sorage(program), dst_mem_idx, storage_get_memory_64b(program_storage(program), src_mem_idx));
}
