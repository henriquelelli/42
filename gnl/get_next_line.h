/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:37:48 by hcesar-l          #+#    #+#             */
/*   Updated: 2022/08/17 21:48:47 by hcesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>

char	*ft_newline(char *s);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *str);
char	*get_next_line(int fd);
void	*ft_error(void *ptr);
void	ft_strlcpy(char *dest, char *src, int len);

#endif