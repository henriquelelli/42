/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:30:58 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/06/22 00:11:49 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*aux;
	int		i;

	i = 0;
	aux = ft_itoa(n);
	while (aux[i])
		write(fd, &aux[i++], 1);
	free(aux);
}
