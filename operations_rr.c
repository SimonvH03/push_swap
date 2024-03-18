/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:44:16 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/18 19:15:11 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void
	rra(
		t_elem **a
	)
{
	write(stdout, "rra\n", 2);
	reverse_rotate(a);
}

void
	rrb(
		t_elem **b
	)
{
	write(stdout, "rrb\n", 2);
	reverse_rotate(b);
}

void
	rrr(
		t_elem **a,
		t_elem **b
	)
{
	write(stdout, "rrr\n", 2);
	reverse_rotate(a);
	reverse_rotate(b);
}
