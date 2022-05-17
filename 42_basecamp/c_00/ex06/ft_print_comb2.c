/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:28:44 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/04/10 19:29:07 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
		write(1, ", ", 2);
}

void	comb_loop_d(char a, char b, char c, char d)
{
	while (d <= '9')
	{
		if (a == c && d == '0')
			d = b + 1;
		if (d == ':')
			break ;
		ft_putchar(a, b, c, d);
		if (a == '9' && b == '8' && c == '9' && d == '9')
			break ;
		d++;
	}
}

void	comb_loops(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = a;
			while (c <= '9')
			{
				d = '0';
				comb_loop_d(a, b, c, d);
				c++;
			}
		b++;
		}
	a++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	comb_loops(a, b, c, d);
}
