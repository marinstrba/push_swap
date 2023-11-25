/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:51:02 by mstrba            #+#    #+#             */
/*   Updated: 2023/11/21 21:39:34 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*-----------------------LIB--------------------*/

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdarg.h>
# include <stdint.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/*-----------------------CHARS-----------------------*/

int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

/*-----------------------STRINGS-----------------------*/

int		ft_strncmp(char	*s1, char	*s2, unsigned int n);
char	*ft_strdup(char *str);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *str, int character);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strrchr(const char *str, int character);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/*-----------------------MEMORY-----------------------*/

int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *ptr, int value, size_t num);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t length);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t num_elements, size_t element_size);

/*-----------------------NUMBERS-----------------------*/

char	*ft_itoa(int n);
int		ft_atoi(const char *str);

/*-----------------------FILES-----------------------*/

void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);

/*------------------------GNL----------------------------*/

char	*get_next_line(int fd);

/*-----------------------Printf----------------------*/

int		ft_putnbr(int nb);
int		ft_putchar(char c);
int		ft_putstr(char	*str);
int		ft_pint(va_list args);
int		ft_pstr(va_list args);
int		ft_pdec(va_list args);
int		ft_pexu(va_list args);
int		ft_pvoid(va_list args);
int		ft_pchar(va_list args);
int		ft_phexl(va_list args);
int		ft_pudec(va_list args);
int		ft_puthex(uintptr_t n);
int		ft_putunbr(unsigned int n);
void	ft_print_num(char	*arr, int num);
int		ft_printf(const char *format, ...);
int		ft_check_format(char *str, int index);
int		ft_puthexlu(unsigned int n, int check);
int		ft_correct_format(char c, va_list args);
int		ft_print_str(const char *format, va_list args);
int		ft_print_format(char *str, int index, va_list args);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif
