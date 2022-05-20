/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:01:03 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/05/20 15:53:31 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*a;
	char	*b;

	a = "Henrique";
	b = "HenriqueL";
	printf("ft_strcmp = %d\n", ft_strcmp(b, a));
	printf("strcmp = %d\n", strcmp(b, a));
}
