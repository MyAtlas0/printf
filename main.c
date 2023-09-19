#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int len_1 = 42;
	int len_2 = 100;
	unsigned int num = 18;
	unsigned int ui = 12345;
	unsigned int octal = 75;
	unsigned int hex_num = 3735928559;
	char c = 'A';
	char *str = "_Printf currently running!!!";
	char *str_1 = "Printf currently running!!!";
	void *addr;

	_printf("Integar: %d%%\nCharacter: %c\nString:%s\n", len_1, c, str);
	printf("Integar: %d%%\nCharacter: %c\nString:%s\n", len_1, c, str_1);
	_printf("Length:[%d, %i]\n", len_2, len_1);
	printf("Length:[%d, %i]\n", len_1, len_2);

	addr = (void *)0x7ffe637541f0;
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	_printf("Len:[%d]\n", len_2);
	printf("Len:[%d]\n", len_2);
	_printf("Unknown:[%r]\n", 'X');
	printf("Unknown:[%r]\n", 'X');
	_printf("Binary: %b\n", num);
	printf("Binary: %b\n", num);

	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", octal);
	printf("Unsigned octal:[%o]\n", octal);
	_printf("Unsigned hexadecimal:[%x, %X]\n", hex_num, hex_num);
	printf("Unsigned hexadecimal:[%x, %X]\n", hex_num, hex_num);

	return (0);
}
