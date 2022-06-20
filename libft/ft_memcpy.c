/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 20:15:15 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/06/20 19:48:44 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str_src;
	unsigned char	*str_dest;

	if (src == NULL && dest == NULL)
		return (NULL);
	str_src = (unsigned char *)src;
	str_dest = (unsigned char *)dest;
	while (n--)
		*str_dest++ = *str_src++;
	return (dest);
}
