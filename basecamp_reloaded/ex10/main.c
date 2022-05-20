#include <stdio.h>

void	ft_swap(int *a, int *b);

int main()
{
	int a;
	int b;

	a = 100;
	b = -5;

	printf("before swap ---> a = %d   b = %d \n", a, b);
	ft_swap(&a, &b);
	printf("after swap ---> a = %d   b = %d \n", a, b);
}