/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step5_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:22:21 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/04/16 18:22:36 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c) // imprime o caractere passado
{
	write(1, &c, 1);
}

void	error(void) // retorna erro
{
	write(1, "Error\n", 6);
}

void	print_board(int **board) // imprime o board
{
	int i; // contador da coluna
	int j; // contador da linha

	i = 1;
	j = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			ft_putchar(board[i][j++] + 48);
			if (j < 5)
				ft_putchar(' ');
		}
		i++;
		ft_putchar('\n');
	}
}

void	ft_putstr(char *str)// recebe um string e imprime todos os caracteres
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return ;
}

void	free_board(int **board) // desaloca a memoria / limpa o board
{
	int i;

	i = 0;
	while (i < 6)
		free(board[i++]);
	free(board);
}
