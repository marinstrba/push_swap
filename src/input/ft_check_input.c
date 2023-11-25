/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:21:19 by mstrba            #+#    #+#             */
/*   Updated: 2023/11/25 22:32:09 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"


int		ft_check_input(char	**argv, t_data  *stack)
{
	printf("AHOJ\n");
	if (ft_check_duplicate(argv) || ft_check_number(argv, stack))
		return (1);
	return (0);
}
