#include "../include/storage.h"
#include <stdlib.h>

struct storage_data
{
  unsigned long int reg[0x10];
  unsigned char memory[MEMORY_SIZE];
};

struct storage_data *init_storage_data(void)
{
  struct storage_data *storage = malloc(sizeof(struct storage_data));
  return storage;
}

unsigned long int storage_get_register(struct storage_data *storage, unsigned char reg_idx)
{
  return storage->reg[reg_idx % 0x10];
}

void storage_set_register(struct storage_data *storage, unsigned char reg_idx, unsigned long int value)
{
  storage->reg[reg_idx % 0x10] = value;
}

unsigned char storage_get_memory_8b(struct storage_data *storage, unsigned long int mem_idx)
{
  return *(unsigned char *)storage->memory[mem_idx % MEMORY_SIZE];
}

unsigned short int storage_get_memory_16b(struct storage_data *storage, unsigned long int mem_idx)
{
  if (mem_idx % MEMORY_SIZE > MEMORY_SIZE - 2) return 0;
  return *(unsigned short int *)storage->memory[mem_idx % MEMORY_SIZE];
}

unsigned int storage_get_memory_32b(struct storage_data *storage, unsigned long int mem_idx)
{
  if (mem_idx % MEMORY_SIZE > MEMORY_SIZE - 4) return 0;
  return *(unsigned int *)storage->memory[mem_idx % MEMORY_SIZE];
}

unsigned long int storage_get_memory_64b(struct storage_data *storage, unsigned long int mem_idx)
{
  if (mem_idx % MEMORY_SIZE > MEMORY_SIZE - 8) return 0;
  return *(unsigned long int *)storage->memory[mem_idx % MEMORY_SIZE];
}

void storage_set_memory_8b(struct storage_data *storage, unsigned long int mem_idx, unsigned char value)
{
  *(unsigned char *)storage->memory[mem_idx % MEMORY_SIZE] = value;
}

void storage_set_memory_16b(struct storage_data *storage, unsigned long int mem_idx, unsigned short int value)
{
  if (mem_idx % MEMORY_SIZE > MEMORY_SIZE - 2) return;
  *(unsigned short int *)storage->memory[mem_idx % MEMORY_SIZE] = value;
}

void storage_set_memory_32b(struct storage_data *storage, unsigned long int mem_idx, unsigned int value)
{
  if (mem_idx % MEMORY_SIZE > MEMORY_SIZE - 4) return;
  *(unsigned int *)storage->memory[mem_idx % MEMORY_SIZE] = value;
}

void storage_set_memory_64b(struct storage_data *storage, unsigned long int mem_idx, unsigned long int value)
{
  if (mem_idx % MEMORY_SIZE > MEMORY_SIZE - 8) return;
  *(unsigned long int *)storage->memory[mem_idx % MEMORY_SIZE] = value;
}

void free_storage_data(struct storage_data *storage)
{
  free(storage);
}
