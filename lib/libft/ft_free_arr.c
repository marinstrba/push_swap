/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:36:27 by maurian           #+#    #+#             */
/*   Updated: 2024/02/17 22:39:08 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_free_arr(char **arr)
{
  if (arr == NULL)
    return ;

  char **temp = arr;
  while (*temp != NULL)
  {
    free(*temp);
    temp++;
  }
  free(arr);
}
