/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:45:18 by mstrba            #+#    #+#             */
/*   Updated: 2023/11/21 21:21:32 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex(uintptr_t n)
{
	char	hex_digits[17];
	char	hex_str[16];
	int		i;
	int		sum;

	sum = 0;
	ft_strlcpy(hex_digits, "0123456789abcdef", 17);
	if (n == 0)
	{
		sum += ft_putchar('0');
		return (0);
	}
	i = 15;
	while (n > 0)
	{
		hex_str[i] = hex_digits[n % 16];
		n /= 16;
		i--;
	}
	while (i < 15)
	{
		sum += ft_putchar(hex_str[++i]);
	}
	return (sum);
}
