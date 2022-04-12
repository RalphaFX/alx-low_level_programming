#ifndef MAIN_H
#define MAIN_H

int _putchar(char r)
{
	return (write(1, &r, 1));
}
void print_alphabet(void)
{
	int i;

	for (i = 97 ; i < 123 ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
#endif
/* main_h */
