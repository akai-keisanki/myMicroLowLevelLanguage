#ifndef MICRO_LANG_PROGRAM_H
#define MICRO_LANG_PROGRAM_H

#include "storage.h"

struct program_state;

struct program_state *init_program(void);
void free_program(struct program_state *program);

struct storage_data *program_storage(struct program_state *program);
const struct storage_data *program_const_storage(const struct program_state *program);

#endif
