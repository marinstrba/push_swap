/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:14:29 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/26 15:51:01 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthexlu(unsigned int n, int check)
{
	char	*hex_digits;
	int		sum;

	sum = 0;
	if (check == 1)
		hex_digits = "0123456789abcdef";
	else
		hex_digits = "0123456789ABCDEF";
	if (n >= 16)
	{
		sum += ft_puthexlu(n / 16, check);
		sum += ft_putchar(hex_digits[(n % 16)]);
	}
	else
	{
		sum += ft_putchar(hex_digits[n]);
	}
	return (sum);
}
