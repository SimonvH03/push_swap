/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_s_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:44:16 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/05/27 17:51:34 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
