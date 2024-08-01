#include "header.h"
#include <stdio.h>


void alphabet (void);
void ralphabet (void);
void newline (void);
void character (void);
void numbers (void);
void isnegative(void);
void combtwo(void);
void combfour(void);
void putnumber(void);

int main (int argc, char **argv)
{

	int i;
	void (*ptr[])() = 
	{
		newline,
		character,
	       	alphabet,
	       	ralphabet,
		numbers,
		isnegative,
		combtwo,
		combfour,
		putnumber,
		NULL
	};

	i = 1;
	
	while (ptr[i] != NULL)
	{
		ptr[i]();
		ptr[0]();
		i++;
	}
	return 0;
}

void alphabet (void)
{
	ft_print_alphabet();
}

void ralphabet (void)
{
	ft_print_reverse_alphabet();
}

void character (void)
{
	ft_putchar('Z');
}

void newline(void)
{
	ft_putchar('\n');
}

void numbers(void)
{
	ft_print_numbers();
}

void isnegative(void)
{
	ft_is_negative(33);
}

void combtwo(void)
{
	ft_print_comb();
}

void combfour(void)
{
	ft_print_comb2();
}

void putnumber(void)
{
	ft_putnbr(-9715425);
}
