/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:52:30 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/26 18:09:12 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_num_help(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		return (1);
	}
	return (0);
}

int	ft_putnbr(int nb)
{
	char	arr[23];
	int		index;
	int		cnt;

	index = 0;
	cnt = ft_num_help(nb);
	if (nb == -2147483648)
		return (cnt);
	if (nb < 0)
		nb *= -1;
	while (nb != 0)
	{
		arr[index] = ((nb % 10) + '0');
		nb /= 10;
		index++;
	}
	ft_print_num(arr, index);
	return (index + cnt);
}
