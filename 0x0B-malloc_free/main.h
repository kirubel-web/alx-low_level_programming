#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

void simple_print_buffer(char *buffer, unsigned int size);
void print_grid(int **grid, int width, int height);
int _putchar(char c);

#endif /* MAIN_H */
