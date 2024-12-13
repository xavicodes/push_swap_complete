/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-13 15:21:22 by xlourenc          #+#    #+#             */
/*   Updated: 2024-12-13 15:21:22 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	swap(t_stack_node **head)
{
	if (!*head || !(*head)->next)
		return ;
	*head = (*head)->next;
	(*head)->prev->prev = *head; 
	(*head)->prev->next = (*head)->next; 
	if ((*head)->next) 
		(*head)->next->prev = (*head)->prev; 
	(*head)->next = (*head)->prev;
	(*head)->prev = NULL;
}

void	sa(t_stack_node	**a, bool print) 
{
	swap(a);
	if (!print)
		write(1,"sa\n",4);
}

void	sb(t_stack_node **b, bool print)
{
	swap(b);
	if (!print)
		write(1,"sb\n",4);
}

void	ss(t_stack_node **a, t_stack_node **b, bool print)
{
	swap(a);
	swap(b);
	if (!print)
		write(1,"ss\n",4);
}