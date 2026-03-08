#ifndef MICRO_LANG_STORAGE_H
#define MICRO_LANG_STORAGE_H

#define MEMORY_SIZE (unsigned long int)0x100000000

struct storage_data;

struct storage_data *init_storage_data(void);

void free_storage_data(struct storage_data *storage);

#endif
