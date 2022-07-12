/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:41:55 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/07/12 16:22:52 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_string(char const *s, char c)
{
	int	i;
	int	str_counter;
	int	is_str;

	i = 0;
	is_str = 0;
	str_counter = 0;
	while (s[i])
	{
		if (s[i] != c && is_str == 0)
		{
			is_str = 1;
			str_counter++;
		}
		else if (s[i] == c)
			is_str = 0;
		i++;
	}
	return (str_counter);
}

static void	str_to_table(char const *s, char c, char **table)
{
	size_t	len;
	size_t	i;
	size_t	j;
	size_t	s_len;

	j = 0;
	i = 0;
	len = 0;
	s_len = ft_strlen(s);
	while (i <= s_len)
	{
		if (s[i] == c || s[i] == '\0')
		{
			if (i != len)
			{
				table[j] = ft_substr(s, len, i - len);
				j++;
			}
			len = i + 1;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**table;
	int		i;

	if (!s)
		return (NULL);
	i = count_string(s, c);
	table = malloc(sizeof(char *) * (i + 1));
	if (table == NULL)
		return (NULL);
	str_to_table(s, c, table);
	table[i] = NULL;
	return (table);
}
