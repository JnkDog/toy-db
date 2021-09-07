#include <stdbool.h>
#include <string.h>

#include "parse.h"
// #include "table.h"

int main(int argc, char* argv[]) {
    // Table* table = new_table();
    InputBuffer* input_buffer = input_buffer_init();
    while (true) {
        print_prompt();
        read_input(input_buffer);
        parse(input_buffer);
    }
}