#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
int	ft_atoi(const char *str);
void	ft_bzero(void *str, size_t n);
void	*ft_calloc(size_t count, size_t size);
int	ft_isalnum(int i);
int	ft_isalpha(int i);
int	ft_isascii(int i);
int	ft_isdigit(int i);
int	ft_isprint(int i);
char	*ft_itoa(int n);
void *ft_memccpy(void *dest, const void *src, int ch, size_t maxSize);
void *ft_memcpy(void *destination, const void *source, size_t size);
void *ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memchr(const void *mem, int ch, size_t size);
void *ft_memset(void *pointer, int value, size_t count);
int ft_memcmp(const void *p1, const void *p2, size_t size);
void	ft_putchar(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
int ft_strlen(const char *str);
int ft_strncmp(char *s1, char *s2, int n);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(int i);
int ft_toupper(int i);
char	*ft_strchr(const char *str, int c);


#endif
