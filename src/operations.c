/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:14:47 by maurian           #+#    #+#             */
/*   Updated: 2024/02/19 09:56:52 by mstrba           ###   ########.fr       */
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

// void  ft_ss()
// {
  
// }

// void  ft_rr()
// {
  
// }

// void  ft_rrr()
// {
  
// }

// void  ft_pa()
// {
  
// }

void  ft_pb()
{
  
}