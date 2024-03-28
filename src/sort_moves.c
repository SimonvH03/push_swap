/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 23:05:45 by simon             #+#    #+#             */
/*   Updated: 2024/03/28 21:21:16 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// not optimized
void
	sort_four(
		t_element **a,
		t_element **b
	)
{
	const t_element	*min = extreme_element(a, -1);

	while (*a != min)
		ra(a);
	pb(a, b);
	sort_three(a);
	pa(a, b);
	return ;
}

void
	sort_three(
		t_element **a
	)
{
	const t_element	*max = extreme_element(a, 1);

	if (max == (*a))
		ra(a);
	else if (max == (*a)->next)
		rra(a);
	if ((*a)->v > (*a)->next->v)
		sa(a);
}

int
	init_sort(
		t_element **a,
		t_element **b
	)
{
	const int	n = stacksize(*a);

	if (n == 2)
	{
		sa(a);
		return (EXIT_SUCCESS);
	}
	if (n == 3)
	{
		sort_three(a);
		return (EXIT_SUCCESS);
	}
	if (n == 4)
	{
		sort_four(a, b);
		return (EXIT_SUCCESS);
	}
	pb(a, b);
	pb(a, b);
	if ((*b)->next->v > (*b)->v)
		sb(b);
	return (EXIT_FAILURE);
}

// check if stacklast(*a) == max, then combine rb or rrb once or twice to save the rra
void
	final_set_b(
		t_element **b
	)
{
	t_stackinfo	info;
	int			i;

	stackinfo(&info, b);
	i = ft_min_abs(info.maxdex, info.maxdex - info.size);
	while (i > 0)
	{
		rb(b);
		i--;
	}
	while (i < 0)
	{
		rrb(b);
		i++;
	}
}

int
	unload_b(
		t_element **a,
		t_element **b
	)
{
	while (stacklast(*a)->v > (*b)->v && (*a)->v < (*b)->v)
		rra(a);
	while (*b != NULL)
	{
		while (stacklast(*a)->v > (*b)->v && stacklast(*a)->v < (*a)->v)
			rra(a);
		pa(a, b);
	}
	while (stacklast(*a)->v < (*a)->v)
		rra(a);
	return (EXIT_SUCCESS);
}
