#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: the memory where its stored
 *@src: the memory where its copied
 *@n: the number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
