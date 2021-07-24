#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * _putchar -writes the character c to stdout
 * @c: The input that will be printed
 * Return: 1 on succes and -1 on error
 */

int _putchar(char c);

/**
 * print_alphabet(void) - prints the alphabet, in lowercase, followed by a new
 * line
 */

void print_alphabet(void);

/**
 * print_alphabet_x10(void) - prints the lower alphabet 10 times
 */

void print_alphabet_x10(void);

/**
 * _islower - check lower case
 * @n: a character to be checked
 * Return: 1 if lower case othewise 0
 */

int _islower(int n);


/**
 * _isalpha - checkes whether the input is a letter, lowercase or uppercase
 * @c: the character to be checked
 * Return: 1 if it is a letter, lower, or uppercase otherwise 0
 */

int _isalpha(int c);

/**
 * int print_sign - checks for a number sign
 * @n: the number to be checked
 * Return: 1 for num greater than 0, 0 for 0, -1 for less than 0
 */

int print_sign(int n);

/**
 * _abs - gives the absolute value of a number
 * @n: The number to be in the absolute value
 * Return: the absolute valued number
 */

int _abs(int n);

/**
 * print_last_digit - print last digit of integer
 * @n: integer number
 * Return: last digit of number
 */

int print_last_digit(int n);

/**
 * jack_bauer - print every minutes of the day from 00:00 to 23:59
 */

void jack_bauer(void);

/**
 * times_table - prints the 9 times table
 */

void times_table(void);

/**
 * add - adds tow integers
 * @a: number 1 to be added
 * @b: number 2 to be added
 * Return: The result of the addition
 */

int add(int a, int b);

/**
 * print_to_98 - print numbers n to 98
 * @n: the intial number to start from
 */

void print_to_98(int n);
void print_times_table(int n);
#endif
