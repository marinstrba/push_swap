/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_target.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:17:31 by mstrba            #+#    #+#             */
/*   Updated: 2024/02/22 16:23:48 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

void	ft_find_target_a(t_stack	**stack_a, t_stack	**stack_b)
{
	t_stack		*tmp;
	t_stack		*target_node;
	t_stack		*b_curr;
	long		match;

	tmp = (*stack_a);
	while (tmp != NULL)
	{
		match = LONG_MIN;
		b_curr = (*stack_b);
		while (b_curr != NULL)
		{
			if (b_curr->value < tmp->value && b_curr->value > match)
			{
				match = b_curr->value;
				target_node = b_curr;
			}
			b_curr = b_curr->next;
		}
		if (match == LONG_MIN)
			tmp->target_node = ft_find_max((*stack_b));
		else
			tmp->target_node = target_node;
		tmp = tmp->next;
	}
}

void	ft_find_target_b(t_stack	**stack_a, t_stack	**stack_b)
{
	t_stack	*tmp;
	t_stack	*target_node;
	t_stack	*a_curr;
	long	match;

	tmp = (*stack_b);
	while (tmp != NULL)
	{
		match = LONG_MAX;
		a_curr = (*stack_a);
		while (a_curr != NULL)
		{
			if (a_curr->value > tmp->value && a_curr->value < match)
			{
				match = a_curr->value;
				target_node = a_curr;
			}
			a_curr = a_curr->next;
		}
		if (match == LONG_MAX)
			tmp->target_node = ft_find_min((*stack_a));
		else
			tmp->target_node = target_node;
		tmp = tmp->next;
	}
}
