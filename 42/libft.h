#ifndef LIBFT_H
# define LIBFT_H 
//check if header is defined
//, if not try to define
# include <stddef.h> // defines common types and macros (IDK)
//all func prototype
size_t	ft_strlen(const char *str);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);

int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);


#endif //close the definition