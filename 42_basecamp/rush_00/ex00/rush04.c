/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 01:55:00 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/19 12:32:09 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
//printa linha
void	print_line(int x, char begin, char middle, char end)
{
	int	col_count;

	col_count = 0;
	if (x > 0)
	{
		ft_putchar (begin);
		if (x > 2)
		{
			while (col_count < x - 2)
			{
				ft_putchar(middle);
				col_count++;
			}
		}
		if (x > 1)
			ft_putchar (end);
		ft_putchar ('\n');
	}
}

void	rush(int x, int y)
{
	int		midcount;

	//first_char = 'o';
	//second_char = '-';
	//third_char = 'o';
	midcount = 0;
	if (y > 0)
	{
		print_line (x, 'A', 'B', 'C');
		while (midcount < y - 2)
		{
			print_line (x, 'B', ' ', 'B');
			midcount++;
		}
	if (y >= 2)
		print_line (x, 'C', 'B', 'A');
	}
		
}
