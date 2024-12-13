/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-13 15:21:16 by xlourenc          #+#    #+#             */
/*   Updated: 2024-12-13 15:21:16 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_stack_node **a)
{
	t_stack_node	*biggest_node; 

	biggest_node = find_max_node(*a);
	if (biggest_node == *a) 
		ra(a, false); 
	else if ((*a)->next == biggest_node)
		rra(a, false); 
	if ((*a)->nbr > (*a)->next->nbr) 
		sa(a, false); 
}
