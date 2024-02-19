/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:51:28 by maurian           #+#    #+#             */
/*   Updated: 2024/02/19 08:56:22 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void    ft_stack_sort_2(t_stack ***stack)
{
  if (!ft_stack_is_sorted((**stack)))
    ft_sa(&(**stack));
}

void    ft_stack_sort_3(t_stack ***stack)
{
  t_stack *biggest_node;

  biggest_node = ft_find_max((**stack));
  while (!ft_stack_is_sorted((**stack)))
  {
    if (biggest_node == (**stack))
      ft_ra(&(**stack));
    else if (biggest_node == (**stack)->next)
      ft_rra(&(**stack));
    else
      ft_sa(&(**stack));
  }
}

void    ft_stack_sort_n(t_stack ***stack_a, t_stack ***stack_b)
{
  size_t  stack_length;

  stack_length = ft_stack_length((**stack_a));
  if (stack_length > 3 && !ft_stack_is_sorted((**stack_a)))
    ft_pb();
  if (stack_length > 3 && !ft_stack_is_sorted((**stack_a)))
    ft_pb();
  while (stack_length > 3 && !ft_stack_is_sorted((**stack_a)))
  {

  }
  ft_stack_sort_3();
  while ()
  {

  }
  
}

void    ft_sort(t_stack **stack_a, t_stack **stack_b)
{
  (void)stack_b;
  while(!ft_stack_is_sorted((*stack_a)))
  {
    if (ft_stack_length((*stack_a)) == 2)
      ft_stack_sort_2(&stack_a);
    else if (ft_stack_length((*stack_a)) == 3)
      ft_stack_sort_3(&stack_a);
    else
      ft_stack_sort_n(&stack_a, &stack_b);
  }
  }