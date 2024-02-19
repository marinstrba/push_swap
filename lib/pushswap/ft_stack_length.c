/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_length.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:00:04 by maurian           #+#    #+#             */
/*   Updated: 2024/02/19 16:26:10 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

int	ft_stack_length(t_stack *stack)
{
	int			stack_length;
	t_stack		*tmp;

	tmp = stack;
	stack_length = 0;
	while (tmp != NULL)
	{
		stack_length++;
		printf("AHOJ");
		tmp = tmp->next;
	}
	return (stack_length);
}
