/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:37:26 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/04/15 15:05:36 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	check;

	check = 1;
	i = 0;
	if (str[i] == '\0')
		return (check);
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			check = 0;
		i++;
	}
	return (check);
}
