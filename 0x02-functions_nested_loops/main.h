#ifndef MAIN_H
#define MAIN_H

int printchar(char r)
{
	return (write(1, &r, 1));
}
void print_alphabet(void);
#endif
/* main_h */
