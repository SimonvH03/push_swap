/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:44:16 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/18 19:14:23 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void
	ra(
		t_elem **a
	)
{
	write(stdout, "ra\n", 2);
	rotate(a);
}

void
	rb(
		t_elem **b
	)
{
	write(stdout, "rb\n", 2);
	rotate(b);
}

void
	rr(
		t_elem **a,
		t_elem **b
	)
{
	write(stdout, "rr\n", 2);
	rotate(a);
	rotate(b);
}
