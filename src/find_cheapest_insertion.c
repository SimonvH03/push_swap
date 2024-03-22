/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cheapest_insertion.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:24:49 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/22 18:05:38 by svan-hoo         ###   ########.fr       */
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

unsigned int
	ft_total_path_length(
		t_path path
	)
{
	unsigned int	total;

	total = ft_abs(path.a_rotations + path.b_rotations);
	return(total);
}

int
	ft_find_b_index(
		t_element **b,
		int val
	)
{
	t_element	*b_temp;
	int			b_index;
	const int	b_size = ft_stacksize(*b);

	b_temp = *b;
	b_index = 0;
	while (b_temp != NULL && b_temp->v > val && b_temp->next->v < val)
	{
		b_index++;
		b_temp = b_temp->next;
	}
	return (ft_min_abs(b_index, b_index - b_size));
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
	int			a_index;
	const int	a_size = ft_stacksize(*a);
	int			v;
	int			v_temp;
	t_element	*a_optimal;

	a_temp = *a;
	a_index = 0;
	while (a_temp != NULL)
	{
		a_temp->path.a_rotations = ft_min_abs(a_index, a_index - a_size);
		a_temp->path.b_rotations = ft_find_b_index(b, a_temp->v);
		printf("[%d](%d)\t%d\t%d\n", a_index, a_temp->v, a_temp->path.a_rotations, a_temp->path.b_rotations);
		a_index++;
		a_temp = a_temp->next;
	}
	a_temp = *a;
	v = ft_total_path_length(a_temp->path);
	while (a_temp != NULL)
	{
		v_temp = ft_total_path_length(a_temp->path);
		if (v_temp > v)
		{
			v = v_temp;
			a_optimal = a_temp;
		}
		a_temp = a_temp->next;
	}
	printf("moving: %d\t%d\n", a_optimal->path.a_rotations, a_optimal->path.b_rotations);
	// ft_move(a, b, a_optimal->path.a_rotations, a_optimal->path.b_rotations);
}
