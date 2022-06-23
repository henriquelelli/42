/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:58:09 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/06/23 20:22:44 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem_blk;
	int		blk_size;

	blk_size = nmemb * size;
	if (!blk_size || ((blk_size / size) != nmemb))
		return (NULL);
	mem_blk = malloc(blk_size);
	if (!mem_blk)
		return (NULL);
	ft_bzero(mem_blk, blk_size);
	return (mem_blk);
}
