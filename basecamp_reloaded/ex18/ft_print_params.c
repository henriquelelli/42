/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:55:04 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/05/20 17:30:35 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc <= 1)
		return (0);
	while (i++ < argc)
	{
		while (*argv[i])
			ft_putchar(*argv[i]++);
		ft_putchar('\n');
		// i++;
	}
	return (0);
}
