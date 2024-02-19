/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_on_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:00:41 by mstrba            #+#    #+#             */
/*   Updated: 2024/02/19 16:17:14 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"
#include "../../src/sort.h"

void	ft_min_on_top(t_stack	**stack)
{
	t_stack	*tmp;

	tmp = (*stack);
	while (tmp->value != ft_find_min(tmp)->value)
	{
		if (ft_find_min(tmp)->above_median)
			ft_ra(&tmp, false, 'a');
		else
			ft_rra(&tmp, false, 'a');
	}
}
