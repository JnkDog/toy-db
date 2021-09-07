CC = gcc
# CFLAGS = -g -std=c99 -I./include/storage 
CFLAGS = -g -std=c99  -I./include/user_input -I./include/storage 
# This is only path to find for Prerequisites not about gcc -I
VPATH = src/user_input:src/storage:include/storage:include/user_input:src

objects = main.o input_buffer.o parse.o page.o

toy_db: $(objects)
	$(CC) -o toy_db $(objects)

main.o: parse.h
parse.o: parsed_flag.h statement_flag.h input_buffer.h parse.h
page.o: page.h row.h 
input_buffer.o: input_buffer.h

.PHONY: clean
clean:
	-rm toy_db $(objects)