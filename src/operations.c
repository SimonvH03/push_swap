/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:02:02 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/05/27 17:51:34 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void
	swap(
		t_element **stack
	)
{
	t_element	*temp;

	if (stacksize(*stack) < 2)
		return ;
	temp = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	temp->next = *stack;
	*stack = temp;
}

void
	push(
		t_element **dest,
		t_element **src
	)
{
	t_element	*temp;

	if (stacksize(*src) < 1)
		return ;
	temp = *src;
	*src = (*src)->next;
	temp->next = *dest;
	*dest = temp;
}

void
	rotate(
		t_element **stack
	)
{
	t_element	*temp;

	if (stacksize(*stack) < 2)
		return ;
	temp = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = *stack;
	*stack = (*stack)->next;
	temp->next->next = NULL;
}

void
	reverse_rotate(
		t_element **stack
	)
{
	t_element	*temp;

	if (stacksize(*stack) < 2)
		return ;
	temp = *stack;
	while (temp->next->next != NULL)
		temp = temp->next;
	temp->next->next = *stack;
	*stack = temp->next;
	temp->next = NULL;
}
