/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:37:17 by maurian           #+#    #+#             */
/*   Updated: 2023/11/25 22:39:27 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

int ft_check_number(char  **argv, t_data  *stack)
{
  int   num;
  int   index;
  char  *line;
  int   index_stack;

  printf("CHECK NUMBER FUNKCE\n");
  index = 1;
  index_stack = 0;
  stack->stack = (int *) malloc (sizeof(int) * stack->argc);
  if (!stack->stack)
  {
    ft_print_error();
    ft_free_stack(stack);
    return (1);
  }
  while (argv[index] != NULL)
  {
    line = argv[index];
    //printf("This is line >> %s\n", line);
    if (ft_strncmp(line, "-1", 2) == 0)
    {
      stack->stack[index_stack] = num;
      index_stack++;
      index++;
      continue ;
    }
    num = ft_atoi(argv[index]);
    if ((num == -1) || (ft_check_pure_num(argv[index])))
    {
      ft_free_stack(stack);
      return (1);
    }
    stack->stack[index_stack] = num;
    //printf("%d\n", stack->stack[index_stack]);
    index++;
    index_stack++;
  }
  return (0);
}
