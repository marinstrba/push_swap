/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:14:47 by maurian           #+#    #+#             */
/*   Updated: 2024/02/19 10:45:46 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_sa(t_stack **stack)
{
	t_stack	*first_node;
	t_stack	*second_node;
	t_stack	*third_node;

	first_node = (*stack);
	second_node = first_node->next;
	third_node = second_node->next;
	second_node->next = first_node;
	second_node->prev = NULL;
	first_node->next = third_node;
	first_node->prev = second_node;
	if (third_node != NULL)
		third_node->prev = first_node;
	*stack = second_node;
}

void	ft_ra(t_stack **stack)
{
	t_stack	*first_node;
	t_stack	*second_node;
	t_stack	*last_node;

	first_node = (*stack);
	second_node = first_node->next;
	last_node = first_node;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = first_node;
	first_node->prev = last_node;
	first_node->next = NULL;
	second_node->prev = NULL;
	*stack = second_node;
}

void	ft_rra(t_stack **stack)
{
	t_stack	*first_node;
	t_stack	*second_to_last_node;
	t_stack	*last_node;

	first_node = (*stack);
	last_node = first_node;
	while (last_node->next != NULL)
		last_node = last_node->next;
	second_to_last_node = last_node->prev;
	last_node->next = first_node;
	last_node->prev = NULL;
	first_node->prev = last_node;
	second_to_last_node->next = NULL;
	*stack = last_node;
}

void	ft_pa(t_stack	**stack_a, t_stack	**stack_b)
{
	t_stack	*swapped_node;

	swapped_node = (*stack_b);
	ft_add_node((*stack_b)->value, &(*stack_a));
	*stack_b = (*stack_b)->next;
	free((*stack_b)->prev);
	(*stack_b)->prev = NULL;
}

void	ft_pb(t_stack	**stack_a, t_stack	**stack_b)
{
	t_stack	*swapped_node;

	swapped_node = (*stack_a);
	ft_add_node((*stack_a)->value, &(*stack_b));
	*stack_a = (*stack_a)->next;
	free((*stack_a)->prev);
	(*stack_a)->prev = NULL;
}
