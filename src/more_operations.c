/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:11:20 by mstrba            #+#    #+#             */
/*   Updated: 2024/02/19 13:00:43 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_ss(t_stack	**stack_a, t_stack	**stack_b, bool	print)
{
	ft_sa(&(*stack_a), false, 'a');
	ft_sa(&(*stack_b), false, 'b');
	if (print)
		ft_putstr("ss\n");
}

void	ft_rr(t_stack	**stack_a, t_stack	**stack_b, bool	print)
{
	ft_ra(&(*stack_a), false, 'a');
	ft_ra(&(*stack_b), false, 'b');
	if (print)
		ft_putstr("rr\n");
}

void	ft_rrr(t_stack	**stack_a, t_stack	**stack_b, bool	print)
{
	ft_rra(&(*stack_a), false, 'a');
	ft_rra(&(*stack_b), false, 'b');
	if (print)
		ft_putstr("rrr\n");
}
