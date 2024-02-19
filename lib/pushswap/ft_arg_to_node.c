/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_to_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:59:15 by maurian           #+#    #+#             */
/*   Updated: 2024/02/19 23:29:38 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

bool	is_string_empty_or_delim(const char *s, char delim)
{
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

t_stack	*ft_arg_to_node(char	**argv)
{
	int			index;
	char		**numbers;
	t_stack		*stack;

	stack = NULL;
	index = 0;
	if (is_string_empty_or_delim(argv[1], ' '))
		exit (-1);
	numbers = ft_split(argv[1], ' ');
	if (numbers == NULL)
	{
		free(numbers);
		return (NULL);
	}
	while (numbers[index])
	{
		if (ft_check_number(numbers[index]))
			ft_add_node(ft_atol(numbers[index]), &stack);
		else
		{
			ft_free_list(stack);
			ft_error_message();
		}
		index++;
	}
	ft_free_arr(numbers);
	return (stack);
}
