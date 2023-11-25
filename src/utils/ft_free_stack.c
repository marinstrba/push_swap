/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:52:40 by maurian           #+#    #+#             */
/*   Updated: 2023/11/25 21:54:48 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

void  ft_free_stack(t_data  *stack)
{
  free(stack->stack);
  free(stack);
  stack = NULL;
}