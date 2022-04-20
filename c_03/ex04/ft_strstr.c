/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 00:33:24 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/04/19 19:53:42 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*i_str;
	char	*i_find;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		i_str = str;
		i_find = to_find;
		while (*i_str == *i_find && *i_find != '\0' && *i_str != '\0')
		{
			i_find++;
			i_str++;
		}
		if (*i_find == '\0')
			return (str);
		str++;
	}
	return (0);
}
