/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 23:41:24 by maurian           #+#    #+#             */
/*   Updated: 2024/02/17 23:44:23 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_print_stack(t_stack *stack)
{
  t_stack *tmp;

  tmp = stack;
  while (tmp != NULL)
  {
    printf("Value: %d, Index: %d\n", tmp->value, tmp->index);
    tmp = tmp->next;
  }
}