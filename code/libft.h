#ifndef LIBFT_H
# define LIBFT_H

int ft_atoi(const char *str);
void ft_bzero(char *str, int n);
void *ft_calloc(size_t count, size_t size);
int ft_isalnum(int i);
int ft_isalpha(int i);
int ft_isascii(int i);
int ft_isdigit(int i);
int ft_isprint(int i);
char *ft_strdup(const char *src);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
int ft_strlen(char *str);
int ft_strncmp(char *s1, char *s2, int n);
int ft_tolower(int i);
int ft_toupper(int i);
char *ft_strdup(const char *src);

#endif
