/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:55:40 by maurian           #+#    #+#             */
/*   Updated: 2024/02/22 15:01:56 by mstrba           ###   ########.fr       */
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
# include "../lib/printf/libftprintf.h"

void	ft_sa(t_stack **stack, bool	print, char letter);
void	ft_ra(t_stack **stack, bool	print, char letter);
void	ft_rra(t_stack **stack, bool	print, char letter);
void	ft_sort(t_stack **stack_a, t_stack **stack_b);
void	ft_pa(t_stack	**stack_a, t_stack	**stack_b, bool	print);
void	ft_pb(t_stack	**stack_a, t_stack	**stack_b, bool	print);
void	ft_ss(t_stack	**stack_a, t_stack	**stack_b, bool	print);
void	ft_rr(t_stack	**stack_a, t_stack	**stack_b, bool	print);
void	ft_rrr(t_stack	**stack_a, t_stack	**stack_b, bool	print);
void	ft_rrb(t_stack **stack_a, t_stack **stack_b, t_stack	*cheapest_node);
void	ft_rrrb(t_stack **stack_a, t_stack **stack_b, t_stack	*cheapest_node);

#endif