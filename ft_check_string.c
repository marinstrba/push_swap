/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:37:26 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/30 16:40:12 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_string(char	*str)
{
	size_t	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
			return (0);
		index++;
	}
	return (1);
}
