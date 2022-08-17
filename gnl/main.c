/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:11:44 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/08/17 22:45:36 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"
#include <fcntl.h>
#include <string.h>

int	main(void)
{
	char	*print_line;
	int		file_1;

	file_1 = open("nl", O_RDONLY);
	printf("file_1 fd = %d\n", file_1);
	print_line = "";
	while (print_line)
	{
		print_line = get_next_line(file_1);
		if (print_line)
		{
			printf("%s", print_line);
			free(print_line);
		}
	}
}

// char	*join(char *s1, char *s2)
// {
// 	char	*str;
// 	int		count_1;
// 	int		count_2;
// 	int		count_str;

// 	count_1 = 0;
// 	count_2 = 0;
// 	count_str = 0;
// 	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
// 	if (!str)
// 		return (ft_error(str));
// 	while (s1 && s1[count_1] != '\0')
// 		str[count_str++] = s1[count_1++];
// 	while (s2 && s2[count_2] != '\0')
// 		str[count_str++] = s2[count_2++];
// 	str[count_str] = '\0';
// 	free(s1);
// 	free(s2);
// 	return (str);
// }

// int	main(void)
// {
// 	static char	*dest;
// 	char		*src;

// 	dest = malloc(4);
// 	strcpy(dest, "abc");
// 	// dest = "abc";
// 	src = malloc(4);
// 	strcpy(src, "def");
// 	printf("dest = %s\n", dest);
// 	printf("src = %s\n", src);
// 	dest = join(dest, src);
// 	printf("dest after strjoin = %s\n", dest);
// 	// free(src);
// 	free(dest);
// 	return (0);
// }