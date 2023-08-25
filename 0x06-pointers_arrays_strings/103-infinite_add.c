#include "main.h"

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: First number as a string.
 * @n2: Second number as a string.
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer r.
 *
 * Return: Pointer to the result in the buffer r, or 0 if result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0;
	int carry = 0;
	int i, j, k;

    while (n1[len1] != '\0')
	len1++;
	while (n2[len2] != '\0')
	len2++;

    if (len1 > size_r || len2 > size_r)
	return 0;

    i = len1 - 1;
	j = len2 - 1;
	k = 0;

    while (i >= 0 || j >= 0 || carry)
	{
	int sum = carry;

	if (i >= 0)
		sum += n1[i] - '0';
	if (j >= 0)
		sum += n2[j] - '0';

	r[k] = (sum % 10) + '0';
	carry = sum / 10;
	i--;
	j--;
	k++;
	}

	r[k] = '\0';

	// Reverse the result string
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
	char temp = r[i];
	r[i] = r[j];
	r[j] = temp;
	}

	return r;
}
