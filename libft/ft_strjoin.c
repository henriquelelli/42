/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 21:01:40 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/06/20 21:17:44 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_ptr;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str_ptr = (char *)malloc(
			(ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	str = str_ptr;
	if (str_ptr == NULL)
		return (NULL);
	while (*s1)
		*str_ptr++ = *s1++;
	while (*s2)
		*str_ptr++ = *s2++;
	*str_ptr = '\0';
	return (str);
}
