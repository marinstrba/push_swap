/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:34:45 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/23 10:14:05 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(const unsigned char *hays, const unsigned char	*need)
{
	int	len;

	len = 0;
	while (*need)
	{
		if (*need != *hays)
			return (0);
		hays++;
		need++;
		len++;
	}
	return (len);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	const unsigned char	*hays;
	const unsigned char	*need;
	int					len;
	size_t				needle_len;

	needle_len = ft_strlen(needle);
	hays = (const unsigned char *) haystack;
	need = (const unsigned char *) needle;
	if (!*needle)
		return ((char *)haystack);
	while (n && *hays)
	{
		len = 0;
		if (*hays == *needle && n >= needle_len)
		{
			len = check(hays, need);
			if (len != 0)
				return ((char *)hays);
		}
		hays++;
		n--;
	}
	return (NULL);
}
