/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:02:02 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/18 22:56:02 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// **stack = head
// *stack = first

void
	swap(
		t_elem **stack
	)
{
	t_elem	*temp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	temp = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	temp->next = *stack;
	*stack = temp;
}

void
	push(
		t_elem **dest,
		t_elem **src
	)
{
	t_elem	*temp;

	if (dest == NULL || src == NULL || *src == NULL)
		return ;
	temp = *src;
	*src = (*src)->next;
	temp->next = *dest;
	*dest = temp;
}

void
	rotate(
		t_elem **stack
	)
{
	t_elem	*last;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	last = *stack;
	while (last->next->next != NULL)
		last = last->next;
	last->next = *stack;
	*stack = (*stack)->next;
	(*stack)->next = NULL;
}

void
	reverse_rotate(
		t_elem **stack
	)
{
	t_elem	*temp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	temp = *stack;
	while (temp->next->next != NULL)
		temp = temp->next;
	temp->next->next = (*stack)->next;
	*stack = temp->next;
	temp->next = NULL;
}
