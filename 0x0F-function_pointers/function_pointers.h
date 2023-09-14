#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
