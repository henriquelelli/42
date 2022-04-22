/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:21:59 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/04/21 16:31:22 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	char	*str;

	if (argc > 0)
	{
		while (argc > 1)
		{
			str = argv[--argc];
			ft_putstr(str);
		}
	}
}
