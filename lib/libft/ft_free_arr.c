/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:36:27 by maurian           #+#    #+#             */
/*   Updated: 2024/02/19 10:08:50 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_arr(char **arr)
{
	char	**temp;

	if (arr == NULL)
		return ;
	temp = arr;
	while (*temp != NULL)
	{
		free(*temp);
		temp++;
	}
	free(arr);
}
