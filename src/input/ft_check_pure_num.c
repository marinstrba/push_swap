/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_pure_num.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:42:36 by maurian           #+#    #+#             */
/*   Updated: 2023/11/25 22:34:17 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

int ft_check_pure_num(char  *str)
{
  int index;

  if (str[0] == '-')
    index = 1;
  else 
    index = 0;
  while (str[index] != '\0')
  {
    if (!(str[index] >= '0' && str[index] <= '9'))
      return (1);
    index++;
  }
  return (0);
}