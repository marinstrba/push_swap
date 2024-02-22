/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:38:48 by mstrba            #+#    #+#             */
/*   Updated: 2024/02/22 16:13:39 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"
#include "../../src/sort.h"

void	ft_move_a_to_b(t_stack	**stack_a, t_stack	**stack_b)
{
	t_stack	*cheapest_node;

	cheapest_node = ft_get_cheapest((*stack_a));
	if (cheapest_node->above_median && cheapest_node->target_node->above_median)
		ft_rrb(&(*stack_a), &(*stack_b), cheapest_node);
	else if (!(cheapest_node->above_median)
		&& !(cheapest_node->target_node->above_median))
		ft_rrrb(&(*stack_a), &(*stack_b), cheapest_node);
	ft_prepare_for_push(&(*stack_a), cheapest_node, 'a');
	ft_prepare_for_push(&(*stack_b), cheapest_node->target_node, 'b');
	ft_pb(&(*stack_a), &(*stack_b), true);
}

void	ft_move_b_to_a(t_stack	**stack_a, t_stack	**stack_b)
{
	ft_prepare_for_push(&(*stack_a), (*stack_b)->target_node, 'a');
	ft_pa(&(*stack_a), &(*stack_b), true);
}

void	ft_prepare_for_push(t_stack	**stack, t_stack	*top_node, char name)
{
	while ((*stack) != top_node)
	{
		if (top_node->above_median)
			ft_ra(&(*stack), true, name);
		else
			ft_rra(&(*stack), true, name);
	}
}
