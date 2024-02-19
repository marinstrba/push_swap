/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_target.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:17:31 by mstrba            #+#    #+#             */
/*   Updated: 2024/02/19 14:46:20 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

t_stack	*ft_find_target_a(t_stack	**stack_a, t_stack	**stack_b)
{
	t_stack	*tmp;
	t_stack	*target_node;
	t_stack	*stack_b_current;
	long	best_match_index;

	tmp = (*stack_a);
	while (tmp != NULL)
	{
		best_match_index = LONG_MIN;
		stack_b_current = (*stack_b);
		while (stack_b_current != NULL)
		{
			if (stack_b_current->value < tmp->value
				&& stack_b_current->value > best_match_index)
			{
				best_match_index = stack_b_current->value;
				target_node = stack_b_current;
			}
			stack_b_current = stack_b_current->next;
		}
		if (best_match_index == LONG_MIN)
			tmp->target_node = ft_find_max((*stack_b));
		tmp = tmp->next;
	}
}

t_stack	*ft_find_target_b(t_stack	**stack_a, t_stack	**stack_b)
{
	t_stack	*tmp;
	t_stack	*target_node;
	t_stack	*stack_a_current;
	long	best_match_index;

	tmp = (*stack_b);
	while (tmp != NULL)
	{
		best_match_index = LONG_MAX;
		stack_a_current = (*stack_b);
		while (stack_a_current != NULL)
		{
			if (stack_a_current->value < tmp->value
				&& stack_a_current->value > best_match_index)
			{
				best_match_index = stack_a_current->value;
				target_node = stack_a_current;
			}
			stack_a_current = stack_a_current->next;
		}
		if (best_match_index == LONG_MAX)
			tmp->target_node = ft_find_max((*stack_b));
		tmp = tmp->next;
	}
}
