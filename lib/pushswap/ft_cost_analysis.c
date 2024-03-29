/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_analysis.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:17:31 by mstrba            #+#    #+#             */
/*   Updated: 2024/02/19 19:52:40 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

void	ft_cost_analysis_a(t_stack	**stack_a, t_stack	**stack_b)
{
	size_t	stack_a_length;
	size_t	stack_b_length;
	t_stack	*temp_a;

	temp_a = (*stack_a);
	stack_a_length = ft_stack_length((*stack_a));
	stack_b_length = ft_stack_length((*stack_b));
	while (temp_a != NULL)
	{
		temp_a->push_cost = temp_a->index;
		if (!(temp_a->above_median))
			temp_a->push_cost = stack_a_length - (temp_a->index);
		if (temp_a->target_node->above_median)
			temp_a->push_cost += temp_a->target_node->index;
		else
			temp_a->push_cost += stack_b_length - (temp_a->target_node->index);
		temp_a = temp_a->next;
	}
}
