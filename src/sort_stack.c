/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:51:28 by maurian           #+#    #+#             */
/*   Updated: 2024/02/19 21:04:17 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_stack_sort_2(t_stack ***stack)
{
	if (!ft_stack_is_sorted((**stack)))
		ft_sa(&(**stack), false, 'a');
}

void	ft_stack_sort_3(t_stack ***stack)
{
	t_stack	*biggest_node;
  //ft_print_stack((**stack));
	biggest_node = ft_find_max((**stack));
	while (!ft_stack_is_sorted((**stack)))
	{
		if (biggest_node == (**stack))
			ft_ra(&(**stack), false, 'a');
		else if (biggest_node == (**stack)->next)
			ft_rra(&(**stack), false, 'a');
		else
			ft_sa(&(**stack), false, 'a');
	}
}

void	ft_print_stack_target(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp != NULL)
	{
		printf("Value: %d, Index: %d\nTarget Value: %d, Target Index: %d\n", tmp->value, tmp->index, tmp->target_node->value, tmp->target_node->index);
		tmp = tmp->next;
	}
}

void	ft_print_cost_analysis(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp != NULL)
	{
		printf("Value: %d, Index: %d, Cost: %d\n", tmp->value, tmp->index, tmp->push_cost);
		tmp = tmp->next;
	}
}

// update indexes after each action in operations
void	ft_stack_sort_n(t_stack ***stack_a, t_stack ***stack_b)
{
	size_t	stack_length;

	stack_length = ft_stack_length((**stack_a));
	if (stack_length-- > 3 && !ft_stack_is_sorted((**stack_a)))
		ft_pb(&(**stack_a), &(**stack_b), false);
	if (stack_length-- > 3 && !ft_stack_is_sorted((**stack_a)))
		ft_pb(&(**stack_a), &(**stack_b), false);
  printf("STACK A:\n");
	ft_print_stack((**stack_a));
	printf("STACK B:\n");
	ft_print_stack((**stack_b));
	printf("/------------------------------/\n");
	while (stack_length-- > 3 && !ft_stack_is_sorted((**stack_a)))
	{
    printf("\nI AM IN FIRST LOOP\n");
    printf("STACK A:\n");
    ft_print_stack((**stack_a));
    printf("STACK B:\n");
    ft_print_stack((**stack_b));
    printf("/------------------------------/\n");
		ft_set_index(&(**stack_a));
		ft_set_index(&(**stack_b));
		ft_find_target_a(&(**stack_a), &(**stack_b));
    printf("PRINTING TARGET VALUE:\n");
    ft_print_stack_target((**stack_a));
		ft_cost_analysis_a(&(**stack_a), &(**stack_b));
    printf("/------------------------------/\n");
    printf("PRINTING COST ANALYSIS:\n");
    ft_print_cost_analysis((**stack_a));
    printf("/------------------------------/\n");
		ft_set_cheapest(&(**stack_a));
    t_stack *tmp = ft_get_cheapest((**stack_a));
    printf("PRINTING CHEAPEST\n");
		printf("Value: %d, Index: %d\n", tmp->value, tmp->index);  
		ft_move_a_to_b(&(**stack_a), &(**stack_b));
	}
	ft_stack_sort_3(&(*stack_a));
	printf("STACK A:\n");
	ft_print_stack((**stack_a));
	printf("STACK B:\n");
	ft_print_stack((**stack_b));
	printf("/------------------------------/\n");
	while ((**stack_b))
	{
		ft_set_index(&(**stack_a));
		ft_set_index(&(**stack_b));
		ft_find_target_b(&(**stack_a), &(**stack_b));
		ft_move_b_to_a(&(**stack_a), &(**stack_b));
		printf("STACK A:\n");
		ft_print_stack((**stack_a));
		printf("STACK B:\n");
		ft_print_stack((**stack_b));
		printf("/------------------------------/\n");
	}
	ft_set_index(&(**stack_a));
	//ft_min_on_top(&(**stack_a));
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
