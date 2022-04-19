/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:12:01 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/04/19 18:53:57 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	check;

	check = 1;
	if (*str == '\0')
		return (check);
	while (*str != '\0')
	{
		if (*str < 32)
			check = 0;
		str++;
	}
	return (check);
}

int main()
{
	printf("%d\n", ft_str_is_printable("askfg"));
}