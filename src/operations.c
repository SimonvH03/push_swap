/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:02:02 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/27 16:51:18 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void
	ft_swap(
		t_element **stack
	)
{
	t_element	*temp;

	if (ft_stacksize(*stack) < 2)
		return ;
	temp = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	temp->next = *stack;
	*stack = temp;
}

void
	ft_push(
		t_element **dest,
		t_element **src
	)
{
	t_element	*temp;

	if (ft_stacksize(*src) < 1)
		return ;
	temp = *src;
	*src = (*src)->next;
	temp->next = *dest;
	*dest = temp;
}

void
	ft_rotate(
		t_element **stack
	)
{
	t_element	*temp;

	if (ft_stacksize(*stack) < 2)
		return ;
	temp = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = *stack;
	*stack = (*stack)->next;
	temp->next->next = NULL;
}

void
	ft_reverse_rotate(
		t_element **stack
	)
{
	t_element	*temp;

	if (ft_stacksize(*stack) < 2)
		return ;
	temp = *stack;
	while (temp->next->next != NULL)
		temp = temp->next;
	temp->next->next = *stack;
	*stack = temp->next;
	temp->next = NULL;
}
