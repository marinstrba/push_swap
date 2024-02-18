/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_to_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:59:15 by maurian           #+#    #+#             */
/*   Updated: 2024/02/18 19:44:04 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

bool is_string_empty_or_delim(const char *s, char delim) {
    if (s == NULL)
        return (true);
    while (*s)
    { 
      if (*s != delim && *s != '\t' && *s != '\n')
        return (false);
      s++;
    }
    return (true);
}

t_stack *ft_arg_to_node(char  **argv)
{
  char  **numbers;
  t_stack *stack;
  
  if (is_string_empty_or_delim(argv[1], ' '))
    ft_error_message();
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
