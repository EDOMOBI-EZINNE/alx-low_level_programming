0 binary 

#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: 0, If b is NULL or contains chars not 0 or 1
 *         Otherwise - the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int uns_int = 0;
int len, base_two;

if (!b)
return (0);


for (len = 0; b[len] != '\0'; len++)
;

for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
{
if (b[len] != '0' && b[len] != '1')
{
return (0);
}

if (b[len] & 1)
{
uns_int += base_two;
}
}

return (uns_int);
}
