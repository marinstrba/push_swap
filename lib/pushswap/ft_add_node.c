/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:49:02 by maurian           #+#    #+#             */
/*   Updated: 2024/02/17 23:09:50 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void  ft_add_node(int  number, t_stack  **stack)
{
  t_stack *new_node;
  t_stack *last_node;

  new_node = (t_stack *) malloc(sizeof(t_stack));
  if (new_node == NULL)
    return ;
  new_node->value = number;
  new_node->index = 0;
  new_node->next = NULL;
  new_node->prev = NULL;
  if (*stack == NULL)
    *stack = new_node;
  else
  {
    last_node = *stack;
    while (last_node->next != NULL)
      last_node = last_node->next;
    last_node->next = new_node;
    new_node->prev = last_node;
    new_node->index = last_node->index + 1;
  }
}