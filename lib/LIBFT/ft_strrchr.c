/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:02:18 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/26 12:59:46 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int character)
{
	const char	*res;

	res = str + ft_strlen(str);
	while (res >= str && *res != (char)character)
		res--;
	if (res >= str)
		return ((char *)res);
	else
		return (NULL);
}
