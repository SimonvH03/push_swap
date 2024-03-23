/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:15:48 by simon             #+#    #+#             */
/*   Updated: 2024/03/23 21:38:14 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_element	*
	ft_stack_iteration(
		t_element *stack,
		int (*f)(t_element *)
	)
{
	if (f == NULL)
		return (NULL);
	while (stack != NULL)
	{
		if (f(stack) == EXIT_SUCCESS)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

// this is temporarily stackadd_back while investigating an issue
void	ft_stackadd_front(t_element **stack, t_element *new)
{
	if (new == NULL)
		return ;
	else if (*stack != NULL)
		ft_stacklast(*stack)->next = new;
	else
		*stack = new;
}

t_element	*ft_stacklast(t_element *stack)
{
	if (stack != NULL)
		while (stack->next != NULL)
			stack = stack->next;
	return (stack);
}

int	ft_stacksize(t_element *stack)
{
	int	count;

	count = 0;
	while (stack != NULL)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}

int	ft_indexstack(const t_element *haystack, const t_element *needle)
{
	int	index;

	index = 0;
	while (haystack != NULL && haystack != needle)
	{
		index++;
		haystack = haystack->next;
	}
	return (index);
}

t_element	*ft_stackindex(t_element *stack, int index)
{
	while (stack != NULL && index--)
		stack = stack->next;
	return (stack);
}
