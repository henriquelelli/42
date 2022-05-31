/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 23:47:04 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/05/26 16:09:58 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;
	int		size;

	i = -1;
	size = ft_strlen(src);
	dup = (char *) malloc (sizeof (char) * size + 1);
	if (dup == NULL)
		return (NULL);
	while (i++ <= size)
	{
		dup[i] = src[i];
	}
	dup[i] = '\0';
	return (dup);
}
