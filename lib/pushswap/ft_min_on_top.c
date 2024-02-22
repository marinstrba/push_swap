/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_on_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:00:41 by mstrba            #+#    #+#             */
/*   Updated: 2024/02/22 16:18:50 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"
#include "../../src/sort.h"

void	ft_min_on_top(t_stack	**stack)
{
	while ((*stack)->value != ft_find_min((*stack))->value)
	{
		if (ft_find_min((*stack))->above_median)
			ft_ra(&(*stack), true, 'a');
		else
			ft_rra(&(*stack), true, 'a');
	}
}
