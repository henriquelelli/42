/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 00:31:12 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/06/21 23:23:15 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	limit;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	limit = len - ft_strlen(little);
	while (big[i] != '\0' && i <= limit && len)
	{
		if (big[i + j] == little[j])
			j++;
		else
		{
			i++;
			j = 0;
		}
		if (little[j] == '\0')
			return ((char *)big + i);
	}
	return (NULL);
}
