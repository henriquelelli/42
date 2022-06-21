/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 01:34:31 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/06/21 01:46:06 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*s_start;
	char	*sub;
	char	*sub_iter;

	if (!s)
		return (NULL);
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	s_start = (char *)s;
	s_len = ft_strlen(s);
	sub_iter = sub;
	s += start;
	while (((size_t)(s - s_start) < s_len) && len--)
		*sub_iter++ = *s++;
	*sub_iter = '\0';
	return (sub);
}
