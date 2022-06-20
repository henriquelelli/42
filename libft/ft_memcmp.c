/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 00:41:05 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/06/20 01:01:10 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_1;
	unsigned char	*ptr_2;
	size_t			i;

	i = 0;
	ptr_1 = (unsigned char *)s1;
	ptr_2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (ptr_1[i] == ptr_2[i] && --n)
		i++;
	return (ptr_1[i] - ptr_2[i]);
}
