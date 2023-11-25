/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 22:11:48 by maurian           #+#    #+#             */
/*   Updated: 2023/11/25 22:19:37 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

void  ft_print_stack(t_data *stack)
{
  printf("Stack:\n");
  printf("Stack size: %d\n", stack->argc);
    for (int i = 0; i < stack->argc; i++) {
        printf("%d\n", stack->stack[i]);
    }
}