/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:47:39 by maurian           #+#    #+#             */
/*   Updated: 2024/02/17 22:09:54 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/pushswap/pushswap.h"
#include "../lib/libft/libft.h"


t_stack *args_checker(int argc, char **argv);

int main (int argc, char  **argv)
{
  t_stack *stack_a;
  t_stack *stack_b;

  stack_a = args_checker(argc, argv);
  return (0);
}

t_stack *args_checker(int argc, char **argv)
{
  int index;
  int number;
  t_stack *stack;

  index = 1;
  if (argc == 1)
    ft_putstr("Error\n");
  else if (argc == 2)
    return (convert_str_to_linkedlist(argv));
  else if (argc > 2)
  {
    while (index <= argc)
    {
      if (check_number(argv[index]))
      {
        number = ft_atoi(argv[index]);
        add_node(number);
      }
      else
        ft_putstr("Error\n");
      index++;
    }
  }
}
