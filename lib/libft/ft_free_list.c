/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 23:34:41 by maurian           #+#    #+#             */
/*   Updated: 2024/02/17 23:39:19 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../pushswap/pushswap.h"

void ft_free_list(t_stack *stack)
{
  t_stack *tmp;

  while (stack != NULL)
  {
    tmp = stack;
    stack = stack->next;
    free(tmp);
  }
}
