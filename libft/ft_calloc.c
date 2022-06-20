/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:58:09 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/06/19 23:16:11 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*ptr;
	size_t	tot_size;

	tot_size = nmemb * size;
	ptr = malloc(tot_size);
	if (!ptr || (tot_size > 2147483647))
		return (NULL);
	ft_bzero(ptr, tot_size);
	return ((void *)ptr);
}
