/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:23:10 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/04/15 14:32:48 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	if (str[0] == '\0')
		return (check);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			check = 0;
		i++;
	}
	return (check);
}
