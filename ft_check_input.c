/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:21:19 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/30 16:37:17 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	ft_check_input(int argc, char	**argv)
{
	size_t	index;

	index = 1;
	while (index < argc)
	{
		if (!ft_check_string(argv[index]))
			return (0);
		index++;
	}
	return (1);
}
