/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:16:17 by maurian           #+#    #+#             */
/*   Updated: 2024/02/19 23:19:03 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_count(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == '\0' || *(s + 1) == c))
			count++;
		s++;
	}
	return (count);
}

char	*next_word(const char *s, char c, size_t *len)
{
	const char	*start;

	while (*s == c)
		s++;
	start = s;
	while (*s && *s != c)
		s++;
	*len = s - start;
	return ((char *)start);
}

void	free_arr(char	**arr, size_t i)
{
	while (i--)
		free(arr[i]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char		**arr;
	size_t		words;
	size_t		len;
	size_t		i;

	arr = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!s || !arr)
		return (NULL);
	words = word_count(s, c);
	i = 0;
	while (i < words)
	{
		s = next_word(s, c, &len);
		arr[i] = (char *)malloc((len + 1) * sizeof(char));
		if (!arr[i])
		{
			free_arr(arr, i);
			return (NULL);
		}
		ft_strlcpy(arr[i], s, len + 1);
		s += len;
		i++;
	}
	arr[words] = NULL;
	return (arr);
}
