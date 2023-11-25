/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:54:18 by mstrba            #+#    #+#             */
/*   Updated: 2023/11/21 21:21:44 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunbr(unsigned int n)
{
	int	sum;

	sum = 0;
	if (n >= 10)
	{
		sum += ft_putunbr(n / 10);
		sum += ft_putchar(n % 10 + '0');
	}
	else
	{
		sum += ft_putchar(n + '0');
	}
	return (sum);
}
