/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cheapest_insertion.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:24:49 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/21 16:23:05 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int
	ft_abs(int value)
{
	if (value < 0)
		return (-value);
	else
		return (value);
}

int
	ft_min_abs(int a, int b)
{
	if (ft_abs(a) < ft_abs(b))
		return (a);
	else
		return (b);
}

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
	while (a_rotations < 0 && b_rotations < 0)
	{
		rrr(a, b);
		a_rotations++;
		b_rotations++;
	}
	while (a_rotations < 0)
	{
		rra(a);
		a_rotations++;
	}
	while (b_rotations < 0)
	{
		rrb(b);
		b_rotations++;
	}
	pb(a, b);
}

// find the number in a that can be pushed to b requiring the least operations
// rx is how many times to rotate stack x before pushing to b
// negative means reverse rotations
// per index in stack A see the path to stack B
// if A + B (- doubles) < index, immediately execute
// this should be limited to 25% of total size (n) up and down stack A
// potential! (during presort_b) when rotating A to push to B, always evaluate sa(A)!!!
// probably invert B polarity when swapping A
void
	ft_find_cheapest_insertion(
		t_element **a,
		t_element **b,
		int n
	)
{
	t_element	*a_temp;
	t_element	*b_temp;
	int			a_index;
	int			b_index;
	const int	a_size = ft_stacksize(a);
	const int	b_size = ft_stacksize(b);

	a_temp = *a;
	b_temp = *b;
	a_index = 1;
	b_index = n;
	while (a_temp != NULL)
	{
		if (a_temp->v > b_temp->v && a_temp->v < ft_stacklast(b_temp)->v)
			b_index = 0;
		while ()
		{
			if (a_temp->v < b_temp->v && a_temp->v > ft_stackindex(b_temp, b_index)->v)
				b_index = (b_index / 2) + (b_index % 2);
			else
				b_index = 0;
		}
		b_temp->path = (t_path)
		{ft_min_abs(b_index, b_index - b_size),
			ft_min_abs(a_index, a_index - a_size)};
		a_temp = a_temp->next;
		a_index++;
	}
	ft_move(a, b, 3, 5);
}
