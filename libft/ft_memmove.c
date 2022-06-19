/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 20:37:43 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/06/19 20:54:13 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s1_aux;
	unsigned char	*s2_aux;
	
	s1_aux = (unsigned char *)dest;
	s2_aux = (unsigned char *)src;
	if (src < dest)
	{
		while (n--)
			s1_aux[n] = s2_aux[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
