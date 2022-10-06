## C - More malloc, free

The free function frees the memory space which have been allocated by a previous call to malloc (or calloc, or realloc). The memory allocated by malloc is freed with a call to the function free.

You should always free all malloc'ed memory spaces.

On error, malloc returns NULL. As for any other C library function, you should always check the malloc return value before using it. If you dont you will run into segfaults.
