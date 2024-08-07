/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 4024/03/18 18:44:16 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/05/28 13:26:05 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void
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

void
	rra(
		t_element **a
	)
{
	ft_printf("rra\n");
	reverse_rotate(a);
}

void
	rrb(
		t_element **b
	)
{
	ft_printf("rrb\n");
	reverse_rotate(b);
}

void
	rrr(
		t_element **a,
		t_element **b
	)
{
	ft_printf("rrr\n");
	reverse_rotate(a);
	reverse_rotate(b);
}
