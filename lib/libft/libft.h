/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:07:13 by maurian           #+#    #+#             */
/*   Updated: 2024/02/17 22:39:19 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_isdigit(int c);
void	ft_putstr(char *s);
void ft_free_arr(char **arr);
int	ft_atoi(const char *str);
int ft_check_number(char *number);
char	**ft_split(char const *s, char c);

#endif