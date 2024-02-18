/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_length.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:00:04 by maurian           #+#    #+#             */
/*   Updated: 2024/02/18 21:49:08 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

int ft_stack_length(t_stack *stack)
{
  int stack_length;
  t_stack *tmp;

  tmp = stack;
  stack_length = 0;
  while (tmp != NULL)
  {
    stack_length++;
    //printf("This is stack length: %d\n", stack_length);
    tmp = tmp->next;
  }
  return (stack_length);
}