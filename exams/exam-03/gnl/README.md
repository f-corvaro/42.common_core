```plaintext
Assignment name  : get_next_line
Expected files   : get_next_line.c, get_next_line.h
Allowed functions: read, free, malloc
--------------------------------------------------------------------------------

Write a function named `get_next_line` that reads a line from a file descriptor.

Prototype:
char *get_next_line(int fd);

Details:

- Your function must return a line that has been read from the file descriptor passed as parameter.
- A "line that has been read" is a succession of 0 to n characters that end with '\n' (ascii code 0x0a) or with End Of File (EOF).
- The line should be returned including the '\n' if it is present at the end of the line that has been read.

BUFFER:

- When you've reached the EOF, you must store the current buffer in a char * and return it.

NULL:

- If the buffer is empty you must return NULL.
- In case of error return NULL.
- If not returning NULL, the pointer should be free-able.

MEMORY:

- Your program will be compiled with the flag -D BUFFER_SIZE=xx, which has to be used as the buffer size for the read calls in your functions.
- Your function must be memory leak free.
- When you've reached the EOF, your function should keep 0 memory allocated with malloc, except the line that has been returned.

FUNCTION:

- Calling your function get_next_line in a loop will allow you to read the text available on a file descriptor one line at a time until the end of the text, no matter the size of the text or one of its lines.
- Make sure that your function behaves well when it reads from a file, from the standard output, from a redirection, etc.
- No call to another function will be done on the file descriptor between 2 calls of get_next_line.

FILE:

- Finally, we consider that get_next_line has an undefined behavior when reading from a binary file.
```
