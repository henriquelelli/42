/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 21:15:22 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/05/18 21:21:39 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 0 || nb > 13)
		return (0);
	if (nb > 1)
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
