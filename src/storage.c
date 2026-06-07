#include "storage.h"
#include "storage.def"
#include <stdlib.h>

struct storage_data
{
  b64_t reg[0x10];
  b8_t memory[MEMORY_SIZE];
};

struct storage_data *init_storage_data(void)
{
  struct storage_data *storage = malloc(sizeof(struct storage_data));
  return storage;
}

b8_t storage_get_register_8b(const struct storage_data *storage, b8_t reg_idx)
{
  return storage->reg[reg_idx % 0x10];
}

b16_t storage_get_register_16b(const struct storage_data *storage, b8_t reg_idx)
{
  return storage->reg[reg_idx % 0x10];
}

b32_t storage_get_register_32b(const struct storage_data *storage, b8_t reg_idx)
{
  return storage->reg[reg_idx % 0x10];
}

b64_t storage_get_register_64b(const struct storage_data *storage, b8_t reg_idx)
{
  return storage->reg[reg_idx % 0x10];
}

void storage_set_register_8b(struct storage_data *storage, b8_t reg_idx, b8_t value)
{
  storage->reg[reg_idx % 0x10] = value;
}

void storage_set_register_16b(struct storage_data *storage, b8_t reg_idx, b16_t value)
{
  storage->reg[reg_idx % 0x10] = value;
}
void storage_set_register_32b(struct storage_data *storage, b8_t reg_idx, b32_t value)
{
  storage->reg[reg_idx % 0x10] = value;
}

void storage_set_register_64b(struct storage_data *storage, b8_t reg_idx, b64_t value)
{
  storage->reg[reg_idx % 0x10] = value;
}

b8_t storage_get_memory_8b(const struct storage_data *storage, b64_t mem_idx)
{
  return *(b8_t *)storage->memory[mem_idx % MEMORY_SIZE];
}

b16_t storage_get_memory_16b(const struct storage_data *storage, b64_t mem_idx)
{
  if (mem_idx % MEMORY_SIZE > MEMORY_SIZE - 2) return 0;
  return *(b16_t *)storage->memory[mem_idx % MEMORY_SIZE];
}

b32_t storage_get_memory_32b(const struct storage_data *storage, b64_t mem_idx)
{
  if (mem_idx % MEMORY_SIZE > MEMORY_SIZE - 4) return 0;
  return *(b32_t *)storage->memory[mem_idx % MEMORY_SIZE];
}

b64_t storage_get_memory_64b(const struct storage_data *storage, b64_t mem_idx)
{
  if (mem_idx % MEMORY_SIZE > MEMORY_SIZE - 8) return 0;
  return *(b64_t *)storage->memory[mem_idx % MEMORY_SIZE];
}

void storage_set_memory_8b(struct storage_data *storage, b64_t mem_idx, b8_t value)
{
  *(b8_t *)storage->memory[mem_idx % MEMORY_SIZE] = value;
}

void storage_set_memory_16b(struct storage_data *storage, b64_t mem_idx, b16_t value)
{
  if (mem_idx % MEMORY_SIZE > MEMORY_SIZE - 2) return;
  *(b16_t *)storage->memory[mem_idx % MEMORY_SIZE] = value;
}

void storage_set_memory_32b(struct storage_data *storage, b64_t mem_idx, b32_t value)
{
  if (mem_idx % MEMORY_SIZE > MEMORY_SIZE - 4) return;
  *(b32_t *)storage->memory[mem_idx % MEMORY_SIZE] = value;
}

void storage_set_memory_64b(struct storage_data *storage, b64_t mem_idx, b64_t value)
{
  if (mem_idx % MEMORY_SIZE > MEMORY_SIZE - 8) return;
  *(b64_t *)storage->memory[mem_idx % MEMORY_SIZE] = value;
}

void free_storage_data(struct storage_data *storage)
{
  free(storage);
}
