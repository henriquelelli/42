/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:27:05 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/04/09 14:01:30 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphab;

	alphab = 'z';
	while (alphab >= 'a')
	{
		write(1, &alphab, 1);
		alphab--;
	}
}
