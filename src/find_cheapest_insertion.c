/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cheapest_insertion.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:24:49 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/21 02:41:26 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// move executes the operations found by find_cheapest_insertion
void
	ft_move(
		t_element **a,
		t_element **b,
		int a_rotations,
		int b_rotations
	)
{
	while (a_rotations > 0 && b_rotations > 0)
	{
		rr(a, b);
		a_rotations--;
		b_rotations--;
	}
	while (a_rotations > 0)
	{
		ra(a);
		a_rotations--;
	}
	while (b_rotations > 0)
	{
		rb(b);
		b_rotations--;
	}
	pb(a, b);
}

// find the number in a that can be pushed to b requiring the least operations
// rx is how many times to rotate stack x before pushing to b
// negative means reverse rotations
// per index in stack A see the path to stack B
// if A + B (- doubles) < index, immediately execute
// this should be limited to 25% of n up and down stack A
// potential! (during presort_b) when rotating A to push to B, always evaluate sa(A)!!!
// probably invert B polarity when swapping A
void
	ft_find_cheapest_insertion(
		t_element **a,
		t_element **b,
		int n
	)
{
	int	a_rotations;
	int	b_rotations;

	a_rotations = 0;
	b_rotations = 0;
	ft_move(a, b, 3, 5);
}
