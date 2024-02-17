/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:51:33 by maurian           #+#    #+#             */
/*   Updated: 2024/02/17 20:51:45 by maurian          ###   ########.fr       */
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
