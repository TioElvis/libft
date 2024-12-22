#include "libft.h"

size_t	ft_strlen(const char *src)
{
    size_t	i;

    i = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    return (i);
}