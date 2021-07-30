#include "input_buffer.h"

InputBuffer* input_buffer_init() {
    InputBuffer* input_buffer = malloc(sizeof(InputBuffer));
    input_buffer->buffer = NULL;
    input_buffer->buffer_length = 0;
    input_buffer->input_length  = 0;

    return input_buffer;
}

void read_input(InputBuffer* input_buffer) {
    /** getline, if the n is not enough for new line
     *  realloc ----> 4 * 8 or 16 or 32 ? * n
    **/
    ssize_t char_read_num = getline(&(input_buffer->buffer),
        &(input_buffer->buffer_length), stdin);
    
    // assert(true) continue run
    assert(char_read_num > 0);

    input_buffer->input_length = char_read_num - 1;
    printf("The input length is %u and the buffer length is %u \n",
        input_buffer->input_length, input_buffer->buffer_length);
    input_buffer->buffer[char_read_num - 1] = 0;    
}

void close_input_buffer(InputBuffer* input_buffer) {
    free(input_buffer->buffer);
    free(input_buffer);
}

void print_prompt() {
    printf("toy_db > ");
}