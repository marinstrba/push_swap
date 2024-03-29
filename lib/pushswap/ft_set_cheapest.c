/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_cheapest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:23:44 by mstrba            #+#    #+#             */
/*   Updated: 2024/02/19 14:38:05 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

void	ft_set_cheapest(t_stack	**stack)
{
	t_stack	*tmp;
	long	cheapest_value;
	t_stack	*cheapest_node;

	if (!(*stack))
		return ;
	tmp = (*stack);
	cheapest_value = INT_MAX;
	while (tmp != NULL)
	{
		if (tmp->push_cost < cheapest_value)
		{
			cheapest_value = tmp->push_cost;
			cheapest_node = tmp;
		}
		tmp = tmp->next;
	}
	cheapest_node->cheapest = true;
}
