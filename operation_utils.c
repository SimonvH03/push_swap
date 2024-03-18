/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:02:02 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/18 22:13:31 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
