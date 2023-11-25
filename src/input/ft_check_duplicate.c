/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurian <maurian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:21:17 by maurian           #+#    #+#             */
/*   Updated: 2023/11/25 22:31:34 by maurian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

int ft_check_duplicate(char **argv)
{
  int   index_a;
  int   index_b;
  char  *compare;

  printf("CHECK DUPLICATE\n");
  index_a = 1;
  while (argv[index_a] != NULL)
  {
    compare = argv[index_a];
    index_b = index_a + 1;
    while (argv[index_b] != NULL)
    {
      //printf("COMPARING %s and %s\n", compare, argv[index_b]);
      if (ft_strncmp(compare, argv[index_b], ft_strlen(compare)) == 0)
        return (1);
      index_b++;
    }
    index_a++;
  }
  return (0);
}
