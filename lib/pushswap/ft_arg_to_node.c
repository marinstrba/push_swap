/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_to_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:59:15 by maurian           #+#    #+#             */
/*   Updated: 2024/02/17 22:42:30 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

t_stack *ft_arg_to_node(char  **argv)
{
  char  **numbers;
  t_stack *stack;
  
  numbers = ft_split(argv[1], ' ');
  while (*numbers)
  {
    if(ft_check_number(*numbers))
      ft_add_node(ft_atoi(*numbers));
    else
      ft_error_message();
    numbers++;
  }
}