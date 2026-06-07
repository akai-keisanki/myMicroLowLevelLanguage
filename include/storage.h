#ifndef MICRO_LANG_STORAGE_H
#define MICRO_LANG_STORAGE_H

typedef __UINT8_TYPE__ b8_t;
typedef __UINT16_TYPE__ b16_t;
typedef __UINT32_TYPE__ b32_t;
typedef __UINT64_TYPE__ b64_t;

struct storage_data;

struct storage_data *init_storage_data(void);
void free_storage_data(struct storage_data *storage);

b8_t storage_get_register_8b(const struct storage_data *storage, b8_t reg_idx);
b16_t storage_get_register_16b(const struct storage_data *storage, b8_t reg_idx);
b32_t storage_get_register_32b(const struct storage_data *storage, b8_t reg_idx);
b64_t storage_get_register_64b(const struct storage_data *storage, b8_t reg_idx);

void storage_set_register_8b(struct storage_data *storage, b8_t reg_idx, b8_t value);
void storage_set_register_16b(struct storage_data *storage, b8_t reg_idx, b16_t value);
void storage_set_register_32b(struct storage_data *storage, b8_t reg_idx, b32_t value);
void storage_set_register_64b(struct storage_data *storage, b8_t reg_idx, b64_t value);

b8_t storage_get_memory_8b(const struct storage_data *storage, b64_t mem_idx);
b16_t storage_get_memory_16b(const struct storage_data *storage, b64_t mem_idx);
b32_t storage_get_memory_32b(const struct storage_data *storage, b64_t mem_idx);
b64_t storage_get_memory_64b(const struct storage_data *storage, b64_t mem_idx);

void storage_set_memory_8b(struct storage_data *storage, b64_t mem_idx, b8_t value);
void storage_set_memory_16b(struct storage_data *storage, b64_t mem_idx, b16_t value);
void storage_set_memory_32b(struct storage_data *storage, b64_t mem_idx, b32_t value);
void storage_set_memory_64b(struct storage_data *storage, b64_t mem_idx, b64_t value);

#endif
