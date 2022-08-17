/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:40:02 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/08/17 23:01:49 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_newline(char *s)
{
	int		len_before;
	int		len_after;
	char	*buffer;

	len_before = 0;
	len_after = 0;
	buffer = "";
	while (s[len_before] && s[len_before] != '\n')
		len_before++;
	if (s[len_before] == '\n')
	{
		len_after = 1 + ft_strlen((char *)s + len_before + 1);
		buffer = malloc(len_after);
		if (!buffer)
			return (NULL);
		buffer[len_after] = '\0';
		ft_strlcpy(buffer, ((char *)s + len_before + 1), len_after);
		free(s);
		return (buffer);
	}
	free(s);
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	counter;

	if (!str)
		return (0);
	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		count_i;
	int		count_str;

	count_i = 0;
	count_str = 0;
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[count_i])
		str[count_str++] = s1[count_i++];
	count_i = 0;
	while (s2[count_i])
		str[count_str++] = s2[count_i++];
	str[count_str] = '\0';
	free(s1);
	return (str);
}

void	*ft_error(void *ptr)
{
	free(ptr);
	return (NULL);
}

void	ft_strlcpy(char *dest, char *src, int len)
{
	while (len--)
	{
		dest[len] = src[len];
	}
}

// void	*ft_calloc(size_t nmemb, size_t size)
// {
// 	void	*mem_blk;
// 	int		blk_size;

// 	blk_size = nmemb * size;
// 	if (!blk_size || ((blk_size / size) != nmemb))
// 		return (NULL);
// 	mem_blk = malloc(blk_size);
// 	if (!mem_blk)
// 		return (NULL);
// 	ft_bzero(mem_blk, blk_size);
// 	return (mem_blk);
// }