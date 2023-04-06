#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	else
		return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - helper function to check if a substring is a palindrome
 * @s: the string to check
 * @start: the index of the first character to check
 * @end: the index of the last character to check
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check_palindrome(s, start + 1, end - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to check
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
