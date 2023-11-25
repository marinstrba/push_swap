/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:12:25 by mstrba            #+#    #+#             */
/*   Updated: 2023/11/25 22:39:50 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

int	main(int argc, char	**argv)
{
	t_data	*stack;

	stack = malloc (sizeof(t_data));
	stack->argc = argc - 1;
	if (ft_check_input(argv, stack))
	{
		ft_print_error();
		return (1);
	}
	else
		ft_sort(stack);
	return (0);
}
