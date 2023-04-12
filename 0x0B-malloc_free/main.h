#ifndef FILE_MAIN
#define FILE_MAIN

#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
char *_strdup(char *str);

char **strtow(char *str);

char *argstostr(int ac, char **av);

char *str_concat(char *s1, char *s2);

void free_grid(int **grid, int height);

int **alloc_grid(int width, int height);

char *create_array(unsigned int size, char c);
=======
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
>>>>>>> 20038e353360130602459fff76dc5755ef64ef48

#endif
