/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step2_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:13:37 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/04/16 18:13:45 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	init_columns(int **board, int *vals) // preenche as colunas com as dicas
{
	int i;
	int mode;

	mode = 0;
	while (mode < 2) // valida apenas a primeira e a ulima coluna
	{
		i = 1;
		while (i < 5)
		{
			board[mode * 5][i] = vals[mode * 4 + i - 1];
			i++;
		}
		mode++;
	}
}

void	init_rows(int **board, int *vals) // preenche as linhas com as dicas
{
	int i;
	int mode;
	
	mode = 0;
	while (mode < 2)
	{
		i = 1;
		while (i < 5)
		{
			board[i][mode * 5] = vals[(mode + 2) * 4 + i - 1];
			i++;
		}
		mode++;
	}
}

int		**initialize_board(int *vals) // cria a matriz board 6x6 vazia
{
	int i;
	int j;
	int **board;

	i = 0;
	j = 0;
	board = malloc(sizeof(*board) * 6); // aloca 6 espaço na memoria para array board
	if (!board) // se o board estiver vazio retorne erro
		return (0);
	while (i < 6)
	{
		j = 0;
		board[i] = malloc(sizeof(**board) * 6); // criar matriz,alocar memoria para 6 colunas. 
		while (j < 6)
		{
			board[i][j] = 0; //preenche com zero todo o board
			j++;
		}
		i++;
	}
	init_columns(board, vals); // função que preenche as dicas nas colunas
	init_rows(board, vals); // função que preenche as dicas nas linhas
	return (board); // retorna a matriz board pronta
}
