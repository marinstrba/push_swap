/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:53:35 by maurian           #+#    #+#             */
/*   Updated: 2024/02/18 20:45:16 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

bool  ft_stack_is_sorted(t_stack  *stack)
{
  t_stack *tmp;

  tmp = stack;
  while (tmp != NULL)
  {
    if (tmp->prev == NULL)
    {
      tmp = tmp->next;
      continue ;
    }
    else if (tmp->value < tmp->prev->value)
      return (false);
    tmp = tmp->next;
  }
  return (true);
}