#ifndef PAGE_H
#define PAGE_H

#include "row.h"

static const uint32_t ID_SIZE = size_of_attribute(Row, id);   // 4B
static const uint32_t USERNAME_SIZE = size_of_attribute(Row, username); // 32 B
static const uint32_t EMAIL_SIZE = size_of_attribute(Row, email); // 255 B
static const uint32_t ID_OFFSET = 0;
static const uint32_t USERNAME_OFFSET = ID_OFFSET + ID_SIZE;
static const uint32_t EMAIL_OFFSET = USERNAME_OFFSET + USERNAME_SIZE;
static const uint32_t ROW_SIZE = ID_SIZE + USERNAME_SIZE + EMAIL_SIZE;

void serialize_row(Row* source, void* destination);

void deserialize_row(void* source, Row* destination);

#endif