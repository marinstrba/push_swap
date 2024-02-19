/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:07:13 by maurian           #+#    #+#             */
/*   Updated: 2024/02/19 13:13:31 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "../pushswap/pushswap.h"

int		ft_isdigit(int c);
void	ft_putstr(char *s);
void	ft_free_arr(char **arr);
long	ft_atoi(const char *str);
void	ft_free_list(t_stack *stack);
int		ft_check_number(char *number);
size_t	ft_strlen(const char *str);
void	ft_print_stack(t_stack *stack);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif