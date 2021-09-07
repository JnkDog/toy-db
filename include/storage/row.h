#ifndef ROW_H
#define ROW_H

#include <stdint.h>

#define COlUMN_USERNAME_SIZE 32
#define COLUMN_EMAIL_SIZE 255
#define size_of_attribute(Struct, Attribute) sizeof(((Struct*)0) -> Attribute)

typedef struct {
    uint32_t id;
    char username[COlUMN_USERNAME_SIZE];
    char email[COLUMN_EMAIL_SIZE];
} Row;

void print_row(Row* row);


#endif