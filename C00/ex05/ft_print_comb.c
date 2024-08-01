#include "../header.h"




void ft_print_comb(void)
{
	char digits[3];


	digits[0] = '0';

	while(digits[0] <= '7')
	{
		digits[1] = digits[0] + 1;
		while (digits[1] <= '8')
		{
			digits[2]= digits[1] + 1;

			while (digits[2] <= '9')
			{
				ft_putchar(digits[0]);
				ft_putchar(digits[1]);
				ft_putchar(digits[2]);
				digits[2]++;
				
				if (digits[0] != '7' || digits[1] != '8')
				{
					ft_putchar(',');
					ft_putchar(' ');
			}	}
			digits[1]++;
		
		}

		digits[0]++;
	}
}
