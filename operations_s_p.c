/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_s_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:44:16 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/18 19:18:40 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void
	sa(
		t_elem **a
	)
{
	write(stdout, "sa\n", 2);
	swap(a);
}

void
	sb(
		t_elem **b
	)
{
	write(stdout, "sb\n", 2);
	swap(b);
}

void
	ss(
		t_elem **a,
		t_elem **b
	)
{
	write(stdout, "ss\n", 2);
	swap(a);
	swap(b);
}

void
	pa(
		t_elem **a,
		t_elem **b
	)
{
	write(stdout, "pa\n", 2);
	push(a, b);
}

void
	pb(
		t_elem **a,
		t_elem **b
	)
{
	write(stdout, "pb\n", 2);
	push(b, a);
}
