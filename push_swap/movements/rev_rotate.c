/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-13 15:20:50 by xlourenc          #+#    #+#             */
/*   Updated: 2024-12-13 15:20:50 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rev_rotate(t_stack_node **stack) 
{
	t_stack_node	*last;

	if (!*stack || !(*stack)->next) 
		return ;
	last = find_last(*stack);
	last->prev->next = NULL;
	last->next = *stack; 
	last->prev = NULL; 
	*stack = last;  
	last->next->prev = last;
}

void	rra(t_stack_node **a, bool print) 
{
	rev_rotate(a);
	if (!print)
		write(1,"rra\n",5);
}

void	rrb(t_stack_node **b, bool print) 
{
	rev_rotate(b);
	if (!print)
		write(1,"rrb\n",5);
}

void	rrr(t_stack_node **a, t_stack_node **b, bool print)
{
	rev_rotate(a);
	rev_rotate(b);
	if (!print)
		write(1,"rrr\n",5);
}