#include <stdio.h>

/*
 * main - program main function
 *
 * Return: always 0
 */

void print_alphabet(void) {
	char a = 'a';
	while(a <= 'z') {
		_putchar(a);
		a++;
	}
}

int main(void) {
	print_alphabet;
	_putchar('\n');
	return (0);
}


