#ifndef _HOLBERTON
#define _HOLBERTON

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * _memset - fills a memory with a constant byte
 * @s: pointer to memory area
 * @b: constant value
 * @n: number of bytest to fill in
 * Return: filled memory byte
 */

char *_memset(char *s, char b, unsigned int n);


/**
 * _memcpy - copies memory area
 * @dest: destination to be copied
 * @src: source to copy from
 * @n: bytes to copy
 * Return: the result
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates a character in a string
 * @s: the string to be manipulated
 * @c: the character to be located
 * Returns: a pointer to the first occurence of the character c in s
 */

char *_strchr(char *s, char c);

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - return pointer to byte in s that matches a byte in accept
 * @s: string to search
 * @accept: target matches
 * Return: pointer to index of string at first occurence
 */

char *_strpbrk(char *s, char *accept);

#endif