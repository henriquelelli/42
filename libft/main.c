/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:45:08 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/06/19 01:44:44 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	test_ft_isalpha(void)
{
	char	c;
	int		i;
	int		err;

	i = 0;
	c = '\0';
	err = 0;
	while (i <= 255)
	{
		if ((ft_isalpha(c) && !isalpha(c)) || (!ft_isalpha(c) && isalpha(c)))
		{
			printf("Error ft_isalpha: %c   -   i = %i\n", c, i);
			printf("ft_isalpha = %i  -  isalpha = %i\n", \
			ft_isalpha(c), isalpha(c));
			err++;
		}
		i++;
		c++;
	}
	if (err == 0)
		printf("ft_isalpha - OK\n");
}

void	test_ft_isdigit(void)
{
	char	c;
	int		i;
	int		err;

	i = 0;
	c = '\0';
	err = 0;
	while (i <= 255)
	{
		if ((ft_isdigit(c) && !isdigit(c)) || (!ft_isdigit(c) && isdigit(c)))
		{
			printf("Error ft_isdigit: %c   -   i = %i\n", c, i);
			err++;
			printf("ft_isdigit = %i - isdigit = %i \n", \
			ft_isdigit(i), isdigit(i));
		}
		i++;
		c++;
	}
	if (err == 0)
		printf("ft_isdigit - OK\n");
}

void	test_ft_isalnum(void)
{
	char	c;
	int		i;
	int		err;

	i = 0;
	c = '\0';
	err = 0;
	while (i <= 255)
	{
		if ((ft_isalnum(c) && !isalnum(c)) || (!ft_isalnum(c) && isalnum(c)))
		{
			printf("Error ft_isalnum: %c   -   i = %i\n", c, i);
			err++;
			printf("ft_isalnum = %i - isalnum = %i \n", ft_isalnum(i), \
			isalnum(i));
		}
		i++;
		c++;
	}
	if (err == 0)
		printf("ft_isalnum - OK\n");
}

void	test_ft_isascii(void)
{
	char	c;
	int		i;
	int		err;

	i = 0;
	c = '\0';
	err = 0;
	while (i <= 255)
	{
		if ((ft_isascii(c) && !isascii(c)) || (!ft_isascii(c) && isascii(c)))
		{
			printf("Error ft_isascii: %c   -   i = %i\n", c, i);
			err++;
			printf("ft_isascii = %i - isascii = %i \n", ft_isascii(i), \
			isascii(i));
		}
		i++;
		c++;
	}
	if (err == 0)
		printf("ft_isascii - OK\n");
}

void	test_ft_strlen(void)
{
	int		err;
	int		i;
	int		j;
	char 	**test_list;

	i = 0;
	err = 0;
	test_list = malloc(sizeof(*test_list) * 5);
	while (i < 5)
	{
		j = 0;
		test_list[i] = malloc(sizeof(**test_list) * 20);
		while (j < 20)
		{
			test_list[i][j] = '\0';
			j++;
		}
		i++;
	}
	strcpy(test_list[0], "Henrique");
	strcpy(test_list[1], "");
	strcpy(test_list[2], "+5ahv~.\\as/");
	strcpy(test_list[3], "+5ahv ~.\\ as/");
	i = -1;
	while (i++ < 3)
	{
		if (strlen(test_list[i]) != ft_strlen(test_list[i]))
		{
			printf("Error ft_strlen: test_list[%i] - %s\n", i, test_list[i]);
			err++;
			printf("ft_strlen = %li - strlen = %li \n", \
			ft_strlen(test_list[i]), strlen(test_list[i]));
		}
	}
	if (err == 0)
		printf("ft_strlen - OK\n");
}

void	test_ft_strncmp(void)
{
	char *test1;
	char *test2;

	test1 = "Henrique";
	test2 = "HenriqueL";
	if (ft_strncmp(test1, test2, 9) != strncmp(test1, test2, 9))
	{
		printf("erro strncmp\n");
		printf("ft_strncmp = %i strncmp = %i\n", ft_strncmp(test1, test2, 9), strncmp(test1, test2, 9));
	}
	else
		printf("ft_strncmp - OK\n");
}

void	test_ft_bzero(void)
{
	char c[] = "Teste";
	size_t	i = 0;
	
	i = ft_strlen(c);
	while (i)
		{
			ft_putchar_fd(c[i], 1);
			i--;
		}
	i = ft_strlen(c);
	ft_putchar_fd('\n', 1);
	ft_bzero(c, i);
	while (i)
		{
			if(c[i] == 0)
				ft_putchar_fd('x', 1);
			i--;
		}
	ft_putchar_fd('\n', 1);
}

int	main(void)
{
	test_ft_bzero();
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_strlen();
	test_ft_strncmp();
	
}
