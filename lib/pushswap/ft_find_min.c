/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:22:54 by maurian           #+#    #+#             */
/*   Updated: 2024/02/18 22:28:53 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

t_stack *ft_find_min(t_stack  *stack)
{
  int     min_value;
  t_stack *tmp;
  t_stack *min_node;

  tmp = stack;
  min_node = NULL;
  min_value = INT_MAX;

  while (tmp != NULL)
  {
    if (tmp->value > min_value)
    {
      min_value = tmp->value;
      min_node = tmp;
    }
    tmp = tmp->next;
  }
  return (min_node);
}