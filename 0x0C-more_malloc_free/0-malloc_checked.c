#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - this allocates memory using d malloc function.
 * @b: refers to the number of bytes to be allocated.
 *
 * Return: is the pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
void *mem = malloc(b);

if (mem == NULL)
exit(98);

return (mem);
}
