/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:16:55 by mstrba            #+#    #+#             */
/*   Updated: 2023/11/25 22:17:59 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*------------------------LIBS------------------------*/

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "LIBFT/libft.h"

/*-----------------------Structs----------------------*/

typedef struct s_data
{
  int *stack;
  int argc;
}         t_data;


/*////////////////////////ERROR///////////////////////*/

void	ft_print_error(void);
/*///////////////////////INPUT/////////////////////////*/

int		ft_check_input(char	**argv, t_data  *stack);
int   ft_check_duplicate(char **argv);
int   ft_check_pure_num(char  *str);
int   ft_check_number(char  **argv, t_data  *stack);
/*///////////////////////SORT///////////////////////////*/

void	ft_sort(t_data  *stack);
/*//////////////////////UTILS////////////////////////////*/

void  ft_free_stack(t_data  *stack);
void  ft_print_stack(t_data *stack);

#endif