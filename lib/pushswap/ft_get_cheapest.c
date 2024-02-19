/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_cheapest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:01:00 by mstrba            #+#    #+#             */
/*   Updated: 2024/02/19 13:33:42 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

t_stack	*ft_get_cheapest(t_stack	*stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp != NULL)
	{
		if (tmp->cheapest)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}
