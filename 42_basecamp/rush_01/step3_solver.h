/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step3_solver.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:16:39 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/04/16 18:16:42 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STEP3_SOLVER_H
# define STEP3_SOLVER_H

int	is_safe(int **board, int val, int row, int col);
int	solver_check_row(int **board, int row, int col);
int	solver_check_col(int **board, int row, int col);
int	solver(int **board, int row, int col);

#endif