#include "../header.h"


void ft_recorsion(int n);
void ft_putnbr(int nb)
{

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}


	ft_recorsion(nb);

}


void ft_recorsion(int nb)
{

	if (nb / 10  == 0)
	{
		return ft_putchar(nb % 10 + 48);
	}
	ft_recorsion(nb / 10);
	ft_putchar(nb % 10 + 48);

}
