/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_on_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:00:41 by mstrba            #+#    #+#             */
/*   Updated: 2024/02/19 21:05:01 by maurian          ###   ########.fr       */
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
			ft_ra(&(*stack), false, 'a');
		else
			ft_rra(&(*stack), false, 'a');
	}
}
