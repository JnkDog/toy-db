CC = gcc
CFLAGS = -g -std=c99 -I./include
VPATH = src:include:src/user_input
# vpath %.h ./include

objects = main.o input_buffer.o

toy_db: $(objects)
	$(CC) -o toy_db $(objects)

# $(objects): input_buffer.h
input_buffer.o: input_buffer.h
main.o: input_buffer.h

.PHONY: clean
clean:
	-rm toy_db $(objects)