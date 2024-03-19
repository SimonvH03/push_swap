/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_s_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:44:16 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 13:41:59 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void
	sa(
		t_elem **a
	)
{
	write(1, "sa\n", 2);
	ft_swap(a);
}

void
	sb(
		t_elem **b
	)
{
	write(1, "sb\n", 2);
	ft_swap(b);
}

void
	ss(
		t_elem **a,
		t_elem **b
	)
{
	write(1, "ss\n", 2);
	ft_swap(a);
	ft_swap(b);
}

void
	pa(
		t_elem **a,
		t_elem **b
	)
{
	write(1, "pa\n", 2);
	ft_push(a, b);
}

void
	pb(
		t_elem **a,
		t_elem **b
	)
{
	write(1, "pb\n", 2);
	ft_push(b, a);
}
