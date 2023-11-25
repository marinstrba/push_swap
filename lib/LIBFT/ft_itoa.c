/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:17:07 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/23 11:15:15 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	num_len(int n);
char	*get_str(int n, int len);
void	reverse_str(char *str);

size_t	num_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*get_str(int n, int len)
{
	char	*res;
	int		index;

	index = 0;
	res = (char *) malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		res[index] = '-';
		index++;
	}
	if (n == 0)
		res[index] = '0';
	while (index < len)
	{
		res[index] = ((n % 10) + '0');
		n /= 10;
		index++;
	}
	res[index] = '\0';
	reverse_str(res);
	return (res);
}

void	reverse_str(char *str)
{
	size_t	start;
	size_t	end;
	char	temp;

	start = 0;
	end = ft_strlen(str) - 1;
	if (str[0] == '-')
		start = 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	len;

	if (n == -2147483648)
	{
		res = (char *)malloc(12 * sizeof(char));
		if (!res)
			return (NULL);
		res[0] = '-';
		res[1] = '2';
		res[2] = '1';
		res[3] = '4';
		res[4] = '7';
		res[5] = '4';
		res[6] = '8';
		res[7] = '3';
		res[8] = '6';
		res[9] = '4';
		res[10] = '8';
		res[11] = '\0';
		return (res);
	}
	len = num_len(n);
	res = get_str(n, len);
	return (res);
}
