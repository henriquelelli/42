/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:47:15 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/05/18 21:11:38 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	unsigned int result;

	result = 1;
	if (nb < 0 || nb > 13)
		return (0);
	while (nb > 1)
		result *= nb--;
	return (result);
}
