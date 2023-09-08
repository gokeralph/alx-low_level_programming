#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - checks malloc
 * @b: integer to check?
 * Return: a pointer or void
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);
    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(98);
    }
    return ptr;
}
