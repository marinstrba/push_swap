/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:11:17 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/23 10:16:08 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	int				index;
	int				result;
	unsigned int	counter;

	result = 0;
	index = 0;
	counter = 0;
	while (counter < n && (s1[index] != '\0' || s2[index] != '\0'))
	{
		if ((unsigned char)s1[index] != (unsigned char)s2[index])
		{
			return ((unsigned char)s1[index] - (unsigned char)s2[index]);
		}
		index++;
		counter++;
	}
	return (result);
}
