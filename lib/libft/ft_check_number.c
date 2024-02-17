/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:46:20 by maurian           #+#    #+#             */
/*   Updated: 2024/02/17 22:11:19 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_check_number(char *number)
{
  int index;

  index = 0;
  while (number[index])
    if(ft_isdigit(number[index]))
      return (1);
  return (0);
}