#include "main.h"

/**
 * clear_bit - sets value of bit at a given indx to 0
 * @n: pointer to the bit
 * @index: index to set value to 0
 *
 * Return: -1 if an error occurs, else 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

*n &= ~(1 << index);

return (1);
}
