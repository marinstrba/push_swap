/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:11:55 by mstrba            #+#    #+#             */
/*   Updated: 2024/02/19 21:21:18 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

void	ft_set_index(t_stack	**stack)
{
	int			index;
	int			median;
	t_stack	*tmp;

	if (!(*stack))
		return ;
	index = 0;
	tmp = (*stack);
	median = ft_stack_length((*stack)) / 2;
	while (tmp != NULL)
	{
		tmp->index = index;
		if (index <= median)
			tmp->above_median = true;
		else
			tmp->above_median = false;
		++index;
		tmp = tmp->next;
	}
}
