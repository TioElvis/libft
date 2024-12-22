#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t dest_size)
{
    size_t i;
    size_t src_length;
    size_t dest_length;
    
    i = 0;
    src_length = ft_strlen(src);    
    dest_length = ft_strlen(dest);

    while (dest_length + i < dest_size && src[i] != '\0')
    {
        dest[dest_length + i] = src[i];
        i++;
    }
    dest[dest_length + i] = '\0';
    
    return (dest_length + src_length);
}