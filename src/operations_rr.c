/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 4024/03/18 18:44:16 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 22:07:00 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void
	rra(
		t_element **a
	)
{
	ft_printf("rra\n");
	ft_reverse_rotate(a);
}

void
	rrb(
		t_element **b
	)
{
	ft_printf("rrb\n");
	ft_reverse_rotate(b);
}

void
	rrr(
		t_element **a,
		t_element **b
	)
{
	ft_printf("rrr\n");
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
}
