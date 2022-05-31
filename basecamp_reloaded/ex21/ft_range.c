/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:16:00 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/05/26 16:45:21 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	range = (int *)0;
	if (max <= min)
		return (range);
	range = (int *) malloc (sizeof(int) * (max - min));
	while (min < max)
		range[i++] = min++;
	return (range);
}
