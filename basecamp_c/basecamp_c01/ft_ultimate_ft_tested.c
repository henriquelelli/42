/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft_tested.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 23:56:30 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/04/04 01:01:59 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	var = 10;
	int *ptr_a;
	int **ptr_b;
	int ***ptr_c;
	int ****ptr_d;
	int *****ptr_e;
	int ******ptr_f;
	int *******ptr_g;
	int ********ptr_h;
	int *********ptr_i;
	int **********ptr_j;
	ptr_a = &var;
	ptr_b = &ptr_a;
	ptr_c = &ptr_b;
	ptr_d = &ptr_c;
	ptr_e = &ptr_d;
	ptr_f = &ptr_e;
	ptr_g = &ptr_f;
	ptr_h = &ptr_g;

	ft_ultimate_ft(&ptr_h);
	printf("%i\n", var);
}
