/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:12:25 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/30 16:46:52 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argv, char	**argv)
{
	if (!ft_check_input(argc, argv))
	{
		ft_print_error();
		return (1);
	}
	else
		ft_sort(argc, argv);
	return (0);
}
