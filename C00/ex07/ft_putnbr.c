#include "../header.h"


void ft_recorsion(long int n);
void ft_putnbr(int nb)
{
	long lnb;

	lnb = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		lnb *= -1;
	}


	ft_recorsion(lnb);

}


void ft_recorsion(long int nb)
{

	if(nb >= 10)
	{
		ft_recorsion(nb / 10 );
	}
	ft_putchar(nb % 10 + 48);

}
