#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
    size_t i;
    size_t src_len;
    size_t dest_len;

    i = 0;
    src_len = ft_strlen(src);    
    dest_len = ft_strlen(dest);    
    while(i < dest_size && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest_len + src_len);
}