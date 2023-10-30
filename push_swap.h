/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:16:55 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/30 16:45:13 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*---------------------LIBS-----------------------*/

#include "../libft/libft.h"
#include "../ft_printf/libftprintf.h"

/*-----------------print_functions----------------*/

void	ft_print_error(void);

/*----------------checker_functions---------------*/

int		ft_check_string(char	*str);
int		ft_check_input(int argc, char	**argv);

/*----------------sorting_functions---------------*/

void	ft_sort(int argc, char	**argv);

#ifndef