/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:44:16 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/05/28 13:25:41 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void
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
	ra(
		t_element **a
	)
{
	ft_printf("ra\n");
	rotate(a);
}

void
	rb(
		t_element **b
	)
{
	ft_printf("rb\n");
	rotate(b);
}

void
	rr(
		t_element **a,
		t_element **b
	)
{
	ft_printf("rr\n");
	rotate(a);
	rotate(b);
}
