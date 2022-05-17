/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:30:11 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/04/20 12:51:23 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	ft_exp(int nbr, int exp)
{
	unsigned int	result;

	result = 1;
	while (exp > 0)
	{
		result = result * nbr;
		exp--;
	}
	return (result);
}

int	ft_pow(int nbr)
{
	int	exp;

	exp = 0;
	while (nbr >= 10)
	{
		exp++;
		nbr = nbr / 10;
	}
	return (exp);
}

void	ft_putnbr(int nb)
{
	int				power;
	unsigned int	aux;

	if (nb < 0 && nb != -2147483648)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	power = ft_pow(nb);
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		power = -5;
	}
	while (power > 0)
	{
		aux = (nb / ft_exp(10, power));
		ft_putchar(aux + '0');
		nb = nb - aux * ft_exp(10, power);
		power--;
	}
	if (power != -5)
		ft_putchar((nb % 10) + '0');
}
