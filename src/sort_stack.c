/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:51:28 by maurian           #+#    #+#             */
/*   Updated: 2024/02/19 14:06:54 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_stack_sort_2(t_stack ***stack)
{
	if (!ft_stack_is_sorted((**stack)))
		ft_sa(&(**stack), true, 'a');
}

void	ft_stack_sort_3(t_stack ***stack)
{
	t_stack	*biggest_node;

	biggest_node = ft_find_max((**stack));
	while (!ft_stack_is_sorted((**stack)))
	{
		if (biggest_node == (**stack))
			ft_ra(&(**stack), true, 'a');
		else if (biggest_node == (**stack)->next)
			ft_rra(&(**stack), true, 'a');
		else
			ft_sa(&(**stack), true, 'a');
	}
}

/**
 * ft_find_target(); 
 * -> we do this for the a stack.
 * ft_set_cheapest();
 * -> we set the cheapest.
*/


void	ft_stack_sort_n(t_stack ***stack_a, t_stack ***stack_b)
{
	size_t	stack_length;

	stack_length = ft_stack_length((**stack_a));
	if (stack_length-- > 3 && !ft_stack_is_sorted((**stack_a)))
		ft_pb(&(**stack_a), &(**stack_b), false);
	if (stack_length-- > 3 && !ft_stack_is_sorted((**stack_a)))
		ft_pb(&(**stack_a), &(**stack_b), false);
	while (stack_length-- > 3 && !ft_stack_is_sorted((**stack_a)))
	{
		/**
		 * We have to setup nodes to be pushed to B.
		 * We cant forget about:
		 * -> cost analysis
		 * -> target node
		 * -> change indexes (also include bool for median)
		*/
	}
	ft_stack_sort_3(&(**stack_a));
	while ()
	{

	}

}

void	ft_sort(t_stack **stack_a, t_stack **stack_b)
{
	if (!ft_stack_is_sorted((*stack_a)))
	{
		if (ft_stack_length((*stack_a)) == 2)
			ft_stack_sort_2(&stack_a);
		else if (ft_stack_length((*stack_a)) == 3)
			ft_stack_sort_3(&stack_a);
		else
			ft_stack_sort_n(&stack_a, &stack_b);
	}
}
