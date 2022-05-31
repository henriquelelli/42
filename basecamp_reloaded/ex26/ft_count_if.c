/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:33:51 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/05/26 17:48:38 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if( char **tab, int (*f)(char*))
{
	int	returns;

	returns = 0;
	while (*tab)
		if (f(*tab++))
			returns++;
	return (returns);
}
