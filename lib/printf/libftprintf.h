/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:43:42 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/29 11:17:38 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

/*-------------------Standart libs----------------------*/

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdint.h>

/*----------------Simple helper functions---------------*/

int			ft_putnbr(int nb);
int			ft_putchar(char c);
int			ft_putstr(char	*str);
int			ft_puthex(uintptr_t n);
size_t		ft_strlen(const char *str);
int			ft_putunbr(unsigned int n);
void		ft_print_num(char	*arr, int num);
int			ft_puthexlu(unsigned int n, int check);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);

/*--------------------Main functions---------------------*/

int			ft_printf(const char *format, ...);
int			ft_print_format(char *str, int index, va_list args);

/*-----------------Formating functions-------------------*/

int			ft_check_format(char *str, int index);
int			ft_correct_format(char c, va_list args);
int			ft_print_str(const char *format, va_list args);

/*--------------------Print functions--------------------*/

int			ft_pint(va_list args);
int			ft_pstr(va_list args);
int			ft_pdec(va_list args);
int			ft_pexu(va_list args);
int			ft_pvoid(va_list args);
int			ft_pchar(va_list args);
int			ft_phexl(va_list args);
int			ft_pudec(va_list args);

#endif