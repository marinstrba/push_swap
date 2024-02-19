/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:38:23 by maurian           #+#    #+#             */
/*   Updated: 2024/02/19 15:48:22 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct stack
{
	int				value;
	int				index;
	int				push_cost;
	bool			above_median;
	bool			cheapest;

	struct stack	*target_node;
	struct stack	*next;
	struct stack	*prev;
}			t_stack;

void	ft_error_message(void);
int		ft_stack_length(t_stack *stack);
t_stack	*ft_find_min(t_stack	*stack);
t_stack	*ft_find_max(t_stack	*stack);
t_stack	*ft_arg_to_node(char	**argv);
void	ft_set_index(t_stack	**stack);
void	ft_set_cheapest(t_stack	**stack);
void	ft_min_on_top(t_stack	**stack);
bool	ft_has_duplicate(t_stack	*stack);
t_stack	*ft_get_cheapest(t_stack	*stack);
bool	ft_stack_is_sorted(t_stack	*stack);
void	ft_add_node(long number, t_stack	**stack);
void	ft_move_a_to_b(t_stack	**stack_a, t_stack	**stack_b);
void	ft_move_b_to_a(t_stack	**stack_a, t_stack	**stack_b);
int		ft_cost_analysis_a(t_stack	**stack_a, t_stack	**stack_b);
int		ft_cost_analysis_b(t_stack	**stack_a, t_stack	**stack_b);
t_stack	*ft_find_target_a(t_stack	**stack_a, t_stack	**stack_b);
void	ft_prepare_for_push(t_stack	**stack, t_stack	*top_node, char name);

#endif