/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 18:50:52 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/06/18 19:15:04 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isspace(char c)
{
	return (( c == '\t'
		|| c == '\v'
		|| c == '\r'
		|| c == '\n'
		|| c == '\f'
		|| c == ' '));
}

int	ft_atoi(const char *nptr)
{
	int	answer;
	int	is_negative;

	is_negative = 0;
	answer = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			is_negative = 1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
		answer = (answer * 10) + (*nptr++ - 48);
	if (is_negative)
		return (answer * -1);
	return (answer);
}
