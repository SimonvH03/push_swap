/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:20:29 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/05/28 14:43:34 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void
	move_init(
		t_move *move,
		int a_sign,
		int b_sign
	)
{
	if (a_sign > 0)
	{
		move->rotate_a = ra;
		move->rotate_both = rr;
	}
	else
	{
		move->rotate_a = rra;
		move->rotate_both = rrr;
	}
	if (b_sign > 0)
		move->rotate_b = rb;
	else
		move->rotate_b = rrb;
}

// move executes the operations found by find_cheapest_insertion
void
	move(
		t_element **a,
		t_element **b,
		t_path path
	)
{
	const int			a_sign = ft_sign(path.a);
	const int			b_sign = ft_sign(path.b);
	t_move				move;

	move_init(&move, a_sign, b_sign);
	if (a_sign == b_sign)
	{
		while (path.a * a_sign > 0 && path.b * b_sign > 0)
		{
			move.rotate_both(a, b);
			path.a -= a_sign;
			path.b -= b_sign;
		}
	}
	while (path.a * a_sign > 0)
	{
		move.rotate_a(a);
		path.a -= a_sign;
	}
	while (path.b * b_sign > 0)
	{
		move.rotate_b(b);
		path.b -= b_sign;
	}
	pb(a, b);
}
