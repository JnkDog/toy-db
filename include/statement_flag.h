#ifndef STATEMENT_FLAG_H
#define STATEMENT_FLAG_H

typedef enum {
    STATEMENT_INSERT,
    STATEMENT_SELECT
} StatementType;

typedef struct 
{
    StatementType type;
} Statement;

#endif