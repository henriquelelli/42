/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:36:33 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/04/21 23:42:10 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != '\0')
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*aux;

	i = 1;
	while (i < argc - 1)
	{
		if ((ft_strcmp(argv[i], argv[i + 1]) > 0))
		{
			aux = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = aux;
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (argc-- > 1)
	{
		ft_putstr(argv[i++]);
	}
}
