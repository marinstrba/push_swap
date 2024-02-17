/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:47:39 by maurian           #+#    #+#             */
/*   Updated: 2024/02/17 22:40:48 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/pushswap/pushswap.h"
#include "../lib/libft/libft.h"


t_stack *args_checker(int argc, char **argv);

int main (int argc, char  **argv)
{
  t_stack *stack_a;
  t_stack *stack_b;

  stack_a = NULL;
  stack_b = NULL;
  stack_a = args_checker(argc, argv);
  return (0);
}

t_stack *args_checker(int argc, char **argv)
{
  int index;
  t_stack *stack;

  index = 0;
  stack = NULL;
  if (argc == 1)
    ft_error_message();
  else if (argc == 2)
    return (ft_arg_to_node(argv));
  else if (argc > 2)
    while (index++ <= argc)
      if (ft_check_number(argv[index]))
        ft_add_node(ft_atoi(argv[index]));
      else
        ft_error_message();
  return (stack);
}
