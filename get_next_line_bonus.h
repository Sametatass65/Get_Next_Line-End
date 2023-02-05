/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatas < aatas@student.42istanbul.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:55:48 by aatas             #+#    #+#             */
/*   Updated: 2023/02/05 16:55:48 by aatas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
#define GET_NEXT_LINE_BONUS_H

#include <unistd.h>
#include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

unsigned int	ft_strlen(char *ptr);
char			*ft_strchr(char *s, int c);
char			*ft_substr(char *s, unsigned int start, unsigned int len);
char			*ft_strjoin(char *s1, char *s2);
char	        *get_next_line(int fd);
char            *read_function(int fd, char *red);         
char	        *apart_line(char *red);
char	        *trim(char *red);

#endif