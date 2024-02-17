/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_to_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:59:15 by maurian           #+#    #+#             */
/*   Updated: 2024/02/17 23:51:49 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

t_stack *ft_arg_to_node(char  **argv)
{
  char  **numbers;
  t_stack *stack;
  
  numbers = ft_split(argv[1], ' ');
  if (numbers == NULL || numbers[0] == NULL)
  {
    if (numbers != NULL)
      free(numbers);
    return (NULL);
  }
  while (*numbers)
  {
    if (ft_check_number(*numbers))
      ft_add_node(ft_atoi(*numbers), &stack);
    else
      ft_error_message();
    numbers++;
  }
  ft_free_arr(numbers);
  return (stack);
}
