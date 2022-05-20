#include <stdio.h>

void ft_ft(int *nbr);

int main()
{
	int nb;

	nb = 10;
	printf("before ft_ft ---> nb = %d \n", nb);
	ft_ft(&nb);
	printf("after ft_ft ---> nb = %d \n", nb);
}