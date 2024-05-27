/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:15:48 by simon             #+#    #+#             */
/*   Updated: 2024/05/27 17:51:34 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_element	*stacklast(t_element *stack)
{
	if (stack != NULL)
		while (stack->next != NULL)
			stack = stack->next;
	return (stack);
}

void	stackadd_back(t_element **stack, t_element *new)
{
	if (new == NULL)
		return ;
	else if (*stack != NULL)
		stacklast(*stack)->next = new;
	else
		*stack = new;
}

int	stacksize(t_element *stack)
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

t_element	*
	extreme_element(
		t_element **stack,
		short sign
	)
{
	t_element	*temp;
	t_element	*extreme;

	temp = *stack;
	extreme = temp;
	while (temp != NULL)
	{
		if (temp->v * sign > extreme->v * sign)
			extreme = temp;
		temp = temp->next;
	}
	return (extreme);
}

// int	indexstack(const t_element *haystack, const t_element *needle)
// {
// 	int	index;

// 	index = 0;
// 	while (haystack != NULL && haystack != needle)
// 	{
// 		index++;
// 		haystack = haystack->next;
// 	}
// 	return (index);
// }

// t_element	*stackindex(t_element *stack, int index)
// {
// 	while (stack != NULL && index--)
// 		stack = stack->next;
// 	return (stack);
// }
