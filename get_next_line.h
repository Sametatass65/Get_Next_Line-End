/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:00:31 by marvin            #+#    #+#             */
/*   Updated: 2023/02/04 19:00:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

unsigned int	ft_strlen(char *ptr);
char			*ft_strchr(char *s, int c);
char			*ft_strdup(char *s1);
char			*ft_substr(char *s, unsigned int start, unsigned int len);
char			*ft_strjoin(char *s1, char *s2);


#endif