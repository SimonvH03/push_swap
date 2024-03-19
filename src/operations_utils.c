/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:02:02 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 14:10:44 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void
	ft_swap(
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
	ft_push(
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
	ft_rotate(
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
	ft_reverse_rotate(
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
