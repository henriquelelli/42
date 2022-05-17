/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step5_print.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:23:05 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/04/16 18:23:07 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STEP5_PRINT_H
# define STEP5_PRINT_H

void	ft_putchar(char c);
void	error(void);
void	print_board(int **board);
void	ft_putstr(char *str);
void	free_board(int **board);

#endif