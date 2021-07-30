#ifndef PARSE_H
#define PARSE_H

#include "parsed_flag.h"
#include "statement_flag.h"
#include "input_buffer.h"

typedef enum {
    SUCCESS_PARSE,
    FAILED_PARSE
} ParseFlag;

ParseFlag parse(InputBuffer* input_buffer);

#endif
