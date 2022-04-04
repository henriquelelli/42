/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod_tested.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 02:00:44 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/04/04 14:57:12 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int	main(void)
{
	int a;
	int b;
	a = 10;
	b = 3;
	
	printf("Before function: a = %i , b = %i\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("After function: a = %i , b = %i\n", a, b);

}