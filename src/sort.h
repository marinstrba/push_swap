/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:55:40 by maurian           #+#    #+#             */
/*   Updated: 2024/02/19 10:12:30 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "../lib/pushswap/pushswap.h"
# include "../lib/libft/libft.h"

void	ft_sa(t_stack **stack);
void	ft_ra(t_stack **stack);
void	ft_rra(t_stack **stack);
void	ft_sort(t_stack **stack_a, t_stack **stack_b);

#endif