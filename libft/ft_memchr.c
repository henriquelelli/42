/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 00:33:12 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/06/20 00:40:04 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	while (n--)
	{
		str = (unsigned char *)s;
		if (*str == (unsigned char)c)
			return (str);
		s++;
	}
	return (NULL);
}
