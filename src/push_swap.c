/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:47:39 by maurian           #+#    #+#             */
/*   Updated: 2024/02/18 21:49:00 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/pushswap/pushswap.h"
#include "../lib/libft/libft.h"
#include "sort.h"


t_stack *args_checker(int argc, char **argv);

int main (int argc, char  **argv)
{
  t_stack *stack_a;
  t_stack *stack_b;

  stack_a = NULL;
  stack_b = NULL;
  stack_a = args_checker(argc, argv);
  if (ft_stack_length(stack_a) == 1)
  {
    ft_print_stack(stack_a);
    ft_free_list(stack_a);
    return (0);
  }
  ft_sort(&stack_a, &stack_b);
  ft_print_stack(stack_a);
  ft_free_list(stack_a);
  (void)stack_b;
  //ft_free_list(stack_b);
  return (0);
}

t_stack *args_checker(int argc, char **argv)
{
  int index;
  t_stack *stack;

  index = 1;
  stack = NULL;
  if (argc == 1)
    ft_error_message();
  else if (argc == 2)
    return (ft_arg_to_node(argv));
  else if (argc > 2)
  {
    while (index < argc)
    {
      if (ft_check_number(argv[index]))
        ft_add_node(ft_atoi(argv[index]), &stack);
      else
        ft_error_message();
      index++;
    }
  }
  return (stack);
}

// int     ft_check_duplicate(t_stack  **stack)
// {
//  //also check convert to long int and check for integer overflow
// }
