/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:14:47 by maurian           #+#    #+#             */
/*   Updated: 2024/02/19 21:19:04 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_sa(t_stack **stack, bool	print, char letter)
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
	if (print)
		printf("s%c\n", letter);
	ft_set_index(&(*stack));
}

void	ft_ra(t_stack **stack, bool	print, char letter)
{
	t_stack	*first_node;
	t_stack	*second_node;
	t_stack	*last_node;

	if (!(*stack) || !(*stack)->next)
		return ;
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
	if (print)
		printf("r%c\n", letter);
	ft_set_index(&(*stack));
}

void	ft_rra(t_stack **stack, bool	print, char letter)
{
	t_stack	*first_node;
	t_stack	*second_to_last_node;
	t_stack	*last_node;

	if (!(*stack) || !(*stack)->next)
		return ;
	first_node = (*stack);
	last_node = first_node;
	while (last_node->next != NULL)
		last_node = last_node->next;
	second_to_last_node = last_node->prev;
  if (second_to_last_node)
    second_to_last_node->next = NULL;
  last_node->next = first_node;
  last_node->prev = NULL;
  first_node->prev = last_node;
	(*stack) = last_node;
	if (print)
		printf("rr%c\n", letter);
	ft_set_index(&(*stack));
}

void	ft_pa(t_stack	**stack_a, t_stack	**stack_b, bool	print)
{
	t_stack	*swapped_node;

	if (!(*stack_b))
		return ;
	swapped_node = (*stack_b);
	*stack_b = (*stack_b)->next;
	if (*stack_b)
		(*stack_b)->prev = NULL;
	swapped_node->next = (*stack_a);
	if ((*stack_a))
		(*stack_a)->prev = swapped_node;
	(*stack_a) = swapped_node;
	if (print)
		ft_putstr("pa\n");
	ft_set_index(&(*stack_a));
	ft_set_index(&(*stack_b));
}

void	ft_pb(t_stack	**stack_a, t_stack	**stack_b, bool	print)
{
	t_stack	*swapped_node;

	if (!(*stack_a))
		return ;
	swapped_node = (*stack_a);
	*stack_a = (*stack_a)->next;
	if (*stack_a)
		(*stack_a)->prev = NULL;
	swapped_node->next = (*stack_b);
	if ((*stack_b))
		(*stack_b)->prev = swapped_node;
	(*stack_b) = swapped_node;
	if (print)
		ft_putstr("pb\n");
	ft_set_index(&(*stack_a));
	ft_set_index(&(*stack_b));
}
