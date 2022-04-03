/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_tested.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 01:04:35 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/04/04 01:38:03 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

	void	ft_swap(int *a, int *b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}
	
	int	main(void)
{
	int	a = 0;
	int b = 1;
	printf("before the swap: a = %i  b = %i\n", a, b);
	ft_swap(&a, &b);
	printf("after the swap: a = %i  b = %i\n", a, b);
	
	return (0);
}	