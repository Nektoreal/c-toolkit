#ifndef STRINGS_H
# define STRINGS_H

# include <stddef.h>

size_t	ft_strlen(const char *str);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);

#endif
