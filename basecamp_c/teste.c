/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 00:49:01 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/04/01 01:13:01 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		a;
	int		b;
	float	c;
	float	d;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%f", &c);
	d = b * c;
	printf("NUMBER = %i\nSALARY = U$ %.2f\n", a, d);
}
