/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:09:50 by mstrba            #+#    #+#             */
/*   Updated: 2023/11/20 12:31:39 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	unsigned char	*memory;
	unsigned int	max_int;

	max_int = 2147483647;
	if (num_elements > max_int && element_size > max_int)
		return (NULL);
	memory = (unsigned char *) malloc(num_elements * element_size);
	if (memory == NULL)
		return (NULL);
	ft_bzero(memory, num_elements * element_size);
	return ((void *) memory);
}
