/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:38:23 by maurian           #+#    #+#             */
/*   Updated: 2024/02/17 22:42:08 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct stack {

  int value;
  int index;

  struct  stack  *next;
  struct  stack  *prev;
}         t_stack;

void  ft_error_message(void);
void  ft_add_node(int  number);
t_stack *ft_arg_to_node(char  **argv)


#endif