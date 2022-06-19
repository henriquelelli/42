/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 20:37:43 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/06/19 20:43:57 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_aux;
	unsigned char	*s2_aux;
	
	s1_aux = (unsigned char *)s1;
	s2_aux = (unsigned char *)s2;
	if (s2 < s1)
	{
		while (n--)
			s1_aux[n] = s2_aux[n];
	}
	else
		ft_memcpy(s1, s2, n);
	return (s1);
}
