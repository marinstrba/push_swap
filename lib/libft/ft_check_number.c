/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:46:20 by maurian           #+#    #+#             */
/*   Updated: 2024/02/19 10:07:56 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_number(char *number)
{
	int	index;

	index = 0;
	while (number[index])
	{
		if (ft_isdigit(number[index]))
			return (1);
		index++;
	}
	return (0);
}
