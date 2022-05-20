/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 21:37:11 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/05/20 16:14:17 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb < 1)
		return (0);
	while ((result * result) < nb)
		result++;
	if ((result * result) == nb)
		return (result);
	return (0);
}
