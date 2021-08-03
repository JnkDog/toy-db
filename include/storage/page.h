#ifndef PAGE_H
#define PAGE_H

#include "row.h"

void serialize_row(Row* source, void* destination);

void deserialize_row(void* source, Row* destination);

#endif