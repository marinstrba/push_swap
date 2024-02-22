/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:47:39 by maurian           #+#    #+#             */
/*   Updated: 2024/02/22 16:13:54 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/pushswap/pushswap.h"
#include "../lib/libft/libft.h"
#include "sort.h"

t_stack	*args_checker(int argc, char **argv);

int	main(int argc, char	**argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	stack_a = args_checker(argc, argv);
	if (ft_has_duplicate(stack_a))
	{
		ft_free_list(stack_a);
		ft_error_message();
		return (EXIT_FAILURE);
	}
	ft_sort(&stack_a, &stack_b);
	ft_free_list(stack_a);
	return (EXIT_SUCCESS);
}

t_stack	*args_checker(int argc, char **argv)
{
	int		index;
	t_stack	*stack;

	index = 1;
	stack = NULL;
	if (argc == 2)
		return (ft_arg_to_node(argv));
	else if (argc > 2)
	{
		while (index < argc)
		{
			if (ft_check_number(argv[index]))
				ft_add_node(ft_atol(argv[index]), &stack);
			else
			{
				ft_free_list(stack);
				ft_error_message();
			}
			index++;
		}
	}
	return (stack);
}
