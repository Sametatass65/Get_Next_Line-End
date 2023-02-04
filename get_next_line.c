/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:00:40 by marvin            #+#    #+#             */
/*   Updated: 2023/02/04 19:00:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*red;
	char		*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	red = read_function(fd, red);
	if (!red)
		return (NULL);
	str = apart_line(red);
	red = trim(red);
	return (str);
}

char    *read_function(int fd, char *red)
{
    char    *ptr;
    char    *rtn;
    int byte;

    ptr = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!ptr)
        return (0);
    byte = 1;
    rtn = ft_strchr(red, '\0');
    while (!rtn && byte != 0)
    {
        byte = read(fd, ptr, BUFFER_SIZE);
        if (byte == -1)
		{
			free(ptr);
			free(red);
			return (0);
		}
		ptr[byte] = '\0';
		red = ft_strjoin(red, ptr);
    }
	free(ptr);
	return (red);    
}

char	*apart_line(char *red)
{
	char	*ptr;
	int		i;

	i = 0;
	if (!*(red + i))
		return (0);
	while (red[i] != '\n' && red[i] != '\0')
		i++;
	if (red[i] == '\n')
		ptr = ft_substr(red, 0, i + 1);
	else
		ptr = ft_substr(red, 0, i);
	if (!ptr)
		return (0);
	return (ptr);
}
char	*trim(char *red)
{
	char	*temp;
	int		i;

	i = 0;
	while (red[i] && red[i] != '\n')
		i++;
	if (!red[i])
	{
		free(red);
		return (0);
	}
	i++;
	temp = ft_substr(red, i, (ft_strlen(red) - i));
	if (!temp)
		return (0);
	free(red);
	return (temp);
}