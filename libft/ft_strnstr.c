/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 00:31:12 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/06/21 01:14:36 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_size;
	size_t	i;

	i = 0;
	little_size = ft_strlen(little);
	if (!(*little))
		return ((char *)big);
	while (*big && (i < len))
	{
		if ((ft_strncmp(big, little, little_size) == 0)
			&& (i + little_size <= len))
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}
