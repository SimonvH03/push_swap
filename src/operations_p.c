/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:44:16 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/05/28 13:25:54 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void
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
	pa(
		t_element **a,
		t_element **b
	)
{
	ft_printf("pa\n");
	push(a, b);
}

void
	pb(
		t_element **a,
		t_element **b
	)
{
	ft_printf("pb\n");
	push(b, a);
}
