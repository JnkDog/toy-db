#ifndef INPUT_BUFFER_H
#define INPUT_BUFFER_H

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
// disable the assert
// #define NDEBUG 
#include <assert.h>

typedef struct {
    char* buffer;
    size_t buffer_length;
    ssize_t input_length; 
} InputBuffer;

InputBuffer* input_buffer_init();

void read_input(InputBuffer* input_buffer);

void close_input_buffer(InputBuffer* input_buffer);

void print_prompt();

#endif