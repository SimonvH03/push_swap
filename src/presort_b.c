/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presort_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:24:49 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/24 18:17:33 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef void	(operation)(t_element **);
typedef void	(double_operation)(t_element **, t_element **);
typedef struct s_move
{
	operation			*rotate_a;
	operation			*rotate_b;
	double_operation	*rotate_both;
}	t_move;

void
	ft_move_init(
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
	ft_move(
		t_element **a,
		t_element **b,
		int a_rotations,
		int b_rotations
	)
{
	const int			a_sign = ft_sign(a_rotations);
	const int			b_sign = ft_sign(b_rotations);
	t_move				move;

	ft_move_init(&move, a_sign, b_sign);
	if (a_sign == b_sign)
	{
		while (a_rotations * a_sign > 0 && b_rotations * b_sign > 0)
		{
			move.rotate_both(a, b);
			a_rotations -= a_sign;
			b_rotations -= b_sign;
		}
	}
	while (a_rotations * a_sign > 0)
	{
		move.rotate_a(a);
		a_rotations -= a_sign;
	}
	while (b_rotations * b_sign > 0)
	{
		move.rotate_b(b);
		b_rotations -= b_sign;
	}
	pb(a, b);
}

int
	ft_total_path_length(
		t_path path
	)
{
	int	total;

	if ((path.a >= 0) == (path.b >= 0))
		total = ft_max(ft_abs(path.a), ft_abs(path.b));
	else
		total = ft_abs(path.a) + ft_abs(path.b);
	return (total);
}

void
	ft_execute_cheapest_insertion(
		t_element **a,
		t_element **b
	)
{
	t_element		*a_temp;
	t_element		*a_optimal;
	int				v;
	int				v_temp;

	a_temp = *a;
	a_optimal = a_temp;
	v = ft_total_path_length(a_temp->path);
	while (a_temp != NULL)
	{
		v_temp = ft_total_path_length(a_temp->path);
		if (v_temp < v)
		{
			v = v_temp;
			a_optimal = a_temp;
		}
		a_temp = a_temp->next;
	}
	// printf("\e[33m(%d) %2d %2d  = %2d\e[0m\n", a_optimal->v, a_optimal->path.a, a_optimal->path.b, v);
	// ft_print_both_stacks(a, b);
	ft_move(a, b, a_optimal->path.a, a_optimal->path.b);
}

int
	ft_find_b_index(
		t_element **b,
		int val
	)
{
	t_element	*b_temp;
	int			b_index;
	t_stackinfo	info;

	ft_stackinfo(&info, b);
	if (val < info.min->v)
		return (info.mindex + 1);
	if (val > info.max->v)
		return (info.maxdex);
	b_index = 0;
	b_temp = *b;
	if (val > b_temp->v)
	{
		while (b_temp != NULL && val > b_temp->v)
		{
			b_index++;
			b_temp = b_temp->next;
		}
	}
	while (b_temp != NULL && b_temp->v > val)
	{
		b_index++;
		b_temp = b_temp->next;
	}
	return (b_index);
}

// find the number in a that can be pushed to b requiring the least operations
// rx is how many times to rotate stack x before pushing to b
// negative means reverse rotations
// per index in stack A see the path to stack B
// if A + B (- doubles) < index, immediately execute
// this should be limited to 25% of total size (n) up and down stack A
// potential! when rotating A to push to B, always evaluate sa(A)!
// 	probably invert B polarity when swapping A
// if consequent moves go opposite directions, maybe save 1 move by swapping instead of the last rb
void
	ft_presort_b(
		t_element **a,
		t_element **b,
		int n
	)
{
	t_element		*a_temp;
	int				a_index;
	int				b_index;
	const int		a_size = ft_stacksize(*a);
	const int		b_size = ft_stacksize(*b);

	a_temp = *a;
	a_index = 0;
	while (a_temp != NULL)
	{
		b_index = ft_find_b_index(b, a_temp->v);
		a_temp->path.a = ft_min_abs(a_index, a_index - a_size);
		a_temp->path.b = ft_min_abs(b_index, b_index - b_size);
		a_index++;
		a_temp = a_temp->next;
	}
	ft_execute_cheapest_insertion(a, b);
}
