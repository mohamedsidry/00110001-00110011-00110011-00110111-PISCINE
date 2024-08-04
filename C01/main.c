#include "header.h"
#include <stdio.h>
#include <unistd.h>

void fun_ft_ft(void);
void newline(void);
void fun_ultimate(void);
int main (int argc, char **argv)
{

	int i;
	void (*ptr[])() = 
	{
		newline,
		fun_ft_ft,
		fun_ultimate,
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
void newline(void)
{
	write(1, "\n", 1);
}

void fun_ft_ft(void)
{
	int i;
	i = 100;

	ft_ft(&i);
	printf("%d", i);
}
void fun_ultimate(void)
{
	int i;
	i = 0;

	int *ptr1, *ptr2, *ptr3, *ptr4, *ptr5, *ptr5, *ptr6, *ptr7, *ptr8, *ptr9;

	*ptr1 = &ptr2;
	*ptr2 = &ptr3;
	*ptr3 = &ptr4;
	*ptr4 = &ptr5;
	*ptr5 = &ptr6;
	*ptr6 = &ptr7;
	*ptr7 = &ptr8;
	*ptr8 = &ptr9;
	ft_ultimate_ft(ptr1);
	printf("%d", *ptr1);
}
