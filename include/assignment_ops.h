#ifndef MICRO_LANG_ASSIGNMENT_OPS_H
#define MICRO_LANG_ASSIGNMENT_OPS_H

#include "program.h"
#include "storage.h"

void assign_reg2reg_8b(struct program_state *program, b8_t src_reg_idx, b8_t dst_reg_idx);
void assign_reg2reg_16b(struct program_state *program, b8_t src_reg_idx, b8_t dst_reg_idx);
void assign_reg2reg_32b(struct program_state *program, b8_t src_reg_idx, b8_t dst_reg_idx);
void assign_reg2reg_64b(struct program_state *program, b8_t src_reg_idx, b8_t dst_reg_idx);

void assign_mem2reg_8b(struct program_state *program, b64_t src_mem_idx, b8_t dst_reg_idx);
void assign_mem2reg_16b(struct program_state *program, b64_t src_mem_idx, b8_t dst_reg_idx);
void assign_mem2reg_32b(struct program_state *program, b64_t src_mem_idx, b8_t dst_reg_idx);
void assign_mem2reg_64b(struct program_state *program, b64_t src_mem_idx, b8_t dst_reg_idx);

void assign_reg2mem_8b(struct program_state *program, b8_t src_reg_idx, b64_t dst_mem_idx);
void assign_reg2mem_16b(struct program_state *program, b8_t src_reg_idx, b64_t dst_mem_idx);
void assign_reg2mem_32b(struct program_state *program, b8_t src_reg_idx, b64_t dst_mem_idx);
void assign_reg2mem_64b(struct program_state *program, b8_t src_reg_idx, b64_t dst_mem_idx);

void assign_mem2mem_8b(struct program_state *program, b64_t src_mem_idx, b64_t dst_mem_idx);
void assign_mem2mem_16b(struct program_state *program, b64_t src_mem_idx, b64_t dst_mem_idx);
void assign_mem2mem_32b(struct program_state *program, b64_t src_mem_idx, b64_t dst_mem_idx);
void assign_mem2mem_64b(struct program_state *program, b64_t src_mem_idx, b64_t dst_mem_idx);

#endif
