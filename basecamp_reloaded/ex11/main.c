#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int a = 50;
	int b = 3;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d   mod = %d \n", div, mod);
}