#include "../push_swap.h"

int	stack_len(t_stack_node *stack)
{
	int	count; 

	if (!stack) 
		return (0);
	count = 0;
	while (stack) 
	{
		stack = stack->next;
		count++;
	}
	return (count);
}

t_stack_node	*find_last(t_stack_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

bool	stack_is_sorted(t_stack_node *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->nbr > stack->next->nbr) 
			return (false);
		stack = stack->next; 
	}
	return (true);
}

t_stack_node	*find_min_node(t_stack_node *stack) 
{
	long			min; 
	t_stack_node	*min_node;

	if (!stack)
		return (NULL);
	min = LONG_MAX; 
	while (stack) 
	{
		if (stack->nbr < min)
		{
			min = stack->nbr;
			min_node = stack;
		}
		stack = stack->next; 
	}
	return (min_node); 
}

t_stack_node	*find_max_node(t_stack_node *stack) 
{
	long			max;
	t_stack_node	*max_node; 

	if (!stack)
		return (NULL);
	max = LONG_MIN;
	while (stack)
	{
		if (stack->nbr > max) 
		{
			max = stack->nbr;
			max_node = stack; 
		}
		stack = stack->next;
	}
	return (max_node);
}

int ft_isdigit(char c)
{
    if(c >= '0' && c <= '9')
        return (1);
    else
        return(0);
}

