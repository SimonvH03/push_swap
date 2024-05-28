/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:44:16 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/05/28 13:26:16 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void
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
	sa(
		t_element **a
	)
{
	ft_printf("sa\n");
	swap(a);
}

void
	sb(
		t_element **b
	)
{
	ft_printf("sb\n");
	swap(b);
}

void
	ss(
		t_element **a,
		t_element **b
	)
{
	ft_printf("ss\n");
	swap(a);
	swap(b);
}
