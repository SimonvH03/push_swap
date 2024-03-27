/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_s_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:44:16 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/27 16:51:18 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void
	sa(
		t_element **a
	)
{
	ft_printf("sa\n");
	ft_swap(a);
}

void
	sb(
		t_element **b
	)
{
	ft_printf("sb\n");
	ft_swap(b);
}

void
	ss(
		t_element **a,
		t_element **b
	)
{
	ft_printf("ss\n");
	ft_swap(a);
	ft_swap(b);
}

void
	pa(
		t_element **a,
		t_element **b
	)
{
	ft_printf("pa\n");
	ft_push(a, b);
}

void
	pb(
		t_element **a,
		t_element **b
	)
{
	ft_printf("pb\n");
	ft_push(b, a);
}
