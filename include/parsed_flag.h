#ifndef PARSED_FLAG_H
#define PARSED_FLAG_H

typedef enum {
    META_COMMAND_SUCCESS,
    META_COMMAND_UNRECOGNIZED_COMMAND
} MetaCommandResult;

typedef enum {
    REPARE_SUCCESS, PREPARE_UNRECOGNIZED_STATEMENT
} PrepareResult;

#endif