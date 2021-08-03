#ifndef STATEMENT_FLAG_H
#define STATEMENT_FLAG_H

#include "row.h"

typedef enum {
    STATEMENT_INSERT,
    STATEMENT_SELECT
} StatementType;

typedef struct 
{
    StatementType type;
    Row row_to_insert;
} Statement;

#endif