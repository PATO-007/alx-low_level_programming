#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the 1st string to be compared.
 * @s2: A pointer to the 2nd string to be compared.
 * Return: If str1 < str2,the -ve difference of the first unmatched characters.
 * if str1 == str2, 0.
 * if str1 > str2,the +ve difference of the first unmatched characters.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
