#include "../header.h"


void ft_print_reverse_alphabet(void)
{
	char z;

	z = 'z';


	while (z > 'a')
	{
		ft_putchar(z);
		z--;
	}
}
