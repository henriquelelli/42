/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:41:43 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/05/21 23:36:29 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] == b[i] && a[i] != '\0')
		i++;
	return ((unsigned char)a[i] - (unsigned char)b[i]);
}

void	ft_print_params(char *param)
{
	while (*param)
		ft_putchar(*param++);
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	int		i;
	char	*sort;

	i = 1;
	if (argc <= 1)
		return (0);
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			sort = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = sort;
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (i < argc)
		ft_print_params(argv[i++]);
	return (0);
}
