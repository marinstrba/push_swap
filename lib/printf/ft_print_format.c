/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:06:26 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/26 14:24:24 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_format(char *str, int index, va_list args)
{
	char	set[11];
	size_t	i;
	int		sum;

	i = 0;
	index++;
	sum = 0;
	ft_strlcpy(set, "cspdiuxX%%", 11);
	while (set[i] != '\0')
	{
		if (set[i] == str[index])
		{
			sum = ft_correct_format(set[i], args);
			break ;
		}
		i++;
	}
	return (sum);
}
