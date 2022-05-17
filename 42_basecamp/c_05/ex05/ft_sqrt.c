/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 23:05:33 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/04/21 21:55:22 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	result;

	result = nb / 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	// while ((result * result) != nb)
	// {
		while ((result * result) > nb)
		{
			result /= 2;
		}
		while ((result * result) < nb)
		{
			result++;
			if ((result * result) > nb)
				return (0);
		}
	// }
	return (result);
}
