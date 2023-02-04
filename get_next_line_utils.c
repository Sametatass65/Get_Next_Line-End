#include "get_next_line.h"

unsigned int	ft_strlen(char *ptr)
{
    unsigned int    i;

    i = 0;
    if(!ptr)
        return (0);
    while(ptr[i])
        i++;
    return (i);
}

char    *ft_strchr(char *s, int c)
{
    int i;

    i = 0;
    if(!s)
        return (0);
    while (s[i])
    {
        if (s[i] == c)
            return ((char *)s + i);
        i++;
    }
    if (s[i] == c)
        return ((char *)s + i);
    return (0);
}

char    *ft_substr(char *s, unsigned int start, unsigned int len)
{
    char    *ptr;
    unsigned int    i;

    if (!s)
        return (0);
    if (ft_strlen(s) < start)
        return (0);
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    ptr = malloc((len + 1) * sizeof(char));
    if (!ptr)
        return (0);
    i = 0;
    while (i < len)
        ptr[i++] = s[start++];
    ptr[len] = '\0';
    return (ptr);
}

char    *ft_strjoin(char *s1, char *s2)
{
    char    *ptr;
    int i;

    i = -1;
    if (!s1)
    {
        s1 = malloc(1 * sizeof(char));
        s1[0] = '\0';
    }
    ptr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!ptr)
        return (0);
    while (s1[++i])
        ptr[i] = s1[i];
    while (*s2)
        ptr[i++] = *s2++;
    ptr[i] = '\0';
    free(s1);
    return (ptr);
}

char    *ft_strdup(char *s1)
{
    char    *ptr;
    int    i;

    i = -1;
    ptr = malloc((ft_strlen(s1) + 1) * sizeof(char)); 
    if (!ptr)
        return (0);
    while (s1[++i])
        ptr[i] = s1[i];
    ptr[i] = '\0';
    return (ptr);
}




































































