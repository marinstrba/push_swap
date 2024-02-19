/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:49:02 by maurian           #+#    #+#             */
/*   Updated: 2024/02/19 17:02:46 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

void	ft_init_stack(t_stack	**stack, int number)
{
	(*stack)->value = number;
	(*stack)->index = 0;
	(*stack)->push_cost = 0;
	(*stack)->cheapest = false;
	(*stack)->above_median = false;
	(*stack)->target_node = NULL;
	(*stack)->next = NULL;
	(*stack)->prev = NULL;
}

void	ft_add_node(long number, t_stack	**stack)
{
	t_stack	*new_node;
	t_stack	*last_node;

	new_node = (t_stack *) calloc(1, sizeof(t_stack));
	if (new_node == NULL)
		return ;
	if (number > INT_MAX || number < INT_MIN)
	{
		ft_free_list((*stack));
		ft_putstr("Integer overflow.");
		printf("%ld\n", number);
		exit (-1);
	}
	ft_init_stack(&new_node, (int)number);
	if (*stack == NULL)
		*stack = new_node;
	else
	{
		last_node = *stack;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
		new_node->prev = last_node;
		new_node->index = last_node->index + 1;
	}
}
