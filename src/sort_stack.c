/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:51:28 by maurian           #+#    #+#             */
/*   Updated: 2024/02/18 22:35:39 by maurian          ###   ########.fr       */
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

void    ft_stack_sort_n(void)
{
  printf("AHOJ\n");
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
    {
      ft_pb();
      ft_pb();
      ft_stack_sort_n();
    }
  }
  // if more then 3 we have to implement turks algorithm 
  // we have to implement functions: stack_sort_n + implementation of each action (ss, rr,rrr, pa, pb)
}