/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step2_board.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:15:09 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/04/16 18:15:12 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STEP2_BOARD_H
# define STEP2_BOARD_H

void	init_columns(int **board, int *vals);
void	init_rows(int **board, int *vals);
int		**initialize_board(int *vals);

#endif