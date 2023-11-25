/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:20:50 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/23 10:42:44 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	result_calc(const char *str, int index)
{
	int	res;
	int	increment;

	res = 0;
	increment = 1;
	while (index > 0)
	{
		index--;
		res += ((str[index] - '0') * increment);
		increment *= 10;
	}
	return (res);
}

int	get_sign(const char **str)
{
	if (**str == '-')
	{
		(*str)++;
		return (-1);
	}
	else if (**str == '+')
	{
		(*str)++;
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	const char	*start;
	int			res;
	int			index;
	int			sign;

	res = 0;
	index = 0;
	sign = 1;
	while (*str && (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	sign = get_sign(&str);
	start = str;
	while (*str >= 48 && *str <= 57)
	{
		str++;
		index++;
	}
	res = result_calc(start, index);
	return (res * sign);
}
