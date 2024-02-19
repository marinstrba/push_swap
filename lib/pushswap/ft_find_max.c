/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:22:54 by maurian           #+#    #+#             */
/*   Updated: 2024/02/19 10:11:03 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

t_stack	*ft_find_max(t_stack	*stack)
{
	int		max_value;
	t_stack	*tmp;
	t_stack	*max_node;

	tmp = stack;
	max_node = NULL;
	max_value = INT_MIN;
	while (tmp != NULL)
	{
		if (tmp->value > max_value)
		{
			max_value = tmp->value;
			max_node = tmp;
		}
		tmp = tmp->next;
	}
	return (max_node);
}
