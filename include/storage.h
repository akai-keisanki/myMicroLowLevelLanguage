#ifndef MICRO_LANG_STORAGE_H
#define MICRO_LANG_STORAGE_H

#define MEMORY_SIZE (unsigned long int)0x100000000

struct storage_data;

struct storage_data *init_storage_data(void);

unsigned long int storage_get_register(struct storage_data *storage, unsigned char reg_idx);
void storage_set_register(struct storage_data *storage, unsigned char reg_idx, unsigned long int value);

unsigned char storage_get_memory_8b(struct storage_data *storage, unsigned long int mem_idx);
unsigned short int storage_get_memory_16b(struct storage_data *storage, unsigned long int mem_idx);
unsigned int storage_get_memory_32b(struct storage_data *storage, unsigned long int mem_idx);
unsigned long int storage_get_memory_64b(struct storage_data *storage, unsigned long int mem_idx);

void storage_set_memory_8b(struct storage_data *storage, unsigned long int mem_idx, unsigned char value);
void storage_set_memory_16b(struct storage_data *storage, unsigned long int mem_idx, unsigned short int value);
void storage_set_memory_32b(struct storage_data *storage, unsigned long int mem_idx, unsigned int value);
void storage_set_memory_64b(struct storage_data *storage, unsigned long int mem_idx, unsigned long int value);

void free_storage_data(struct storage_data *storage);

#endif
