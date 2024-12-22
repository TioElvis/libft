#include "libft.h"

char *ft_strrchr(const char *src, int c)
{
    size_t i;

    i = ft_strlen(src) - 1;
    while (i >= 0)
    {
        if (src[i] == c)
        {
            return ((char *)&src[i]);
        }
        i--;
    }
    return (NULL);
}