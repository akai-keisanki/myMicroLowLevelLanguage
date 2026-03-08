#ifndef MICRO_LANG_INTERPRETER_H
#define MICRO_LANG_INTERPRETER_H

#include "storage.h"

signed int interpret_op(struct storage_data *data, const unsigned char op[4]);

#endif
