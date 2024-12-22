#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t ft_strlen(const char *src);
size_t ft_strlcpy(char *dest, const char *src, size_t dest_size);
size_t ft_strlcat(char *dest, const char *src, size_t dest_size);
int ft_toupper(int c);
int ft_tolower(int c);

#endif