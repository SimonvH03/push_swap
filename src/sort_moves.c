/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 23:05:45 by simon             #+#    #+#             */
/*   Updated: 2024/03/23 21:39:44 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// not optimized
void
	ft_sort_four(
		t_element **a,
		t_element **b
	)
{
	const t_element	*min = ft_extreme_element(a, -1);
	const t_element	*max = ft_extreme_element(a, 1);

	while (*a != min && *a != max)
		ra(a);
	pb(a, b);
	ft_sort_three(a);
	pa(a, b);
	if (*a == max)
		ra(a);
	return ;
}

void
	ft_sort_three(
		t_element **a
	)
{
	const t_element	*maximum = ft_extreme_element(a, 1);

	if (maximum == (*a))
		ra(a);
	else if (maximum == (*a)->next)
		rra(a);
	if ((*a)->v > (*a)->next->v)
		sa(a);
}

int
	ft_init_sort(
		t_element **a,
		t_element **b,
		int n
	)
{
	if (n == 2)
	{
		sa(a);
		return (EXIT_SUCCESS);
	}
	if (n == 3)
	{
		ft_sort_three(a);
		return (EXIT_SUCCESS);
	}
	if (n == 4)
	{
		ft_sort_four(a, b);
		return (EXIT_SUCCESS);
	}
	pb(a, b);
	pb(a, b);
	if ((*b)->next->v > (*b)->v)
		sb(b);
	return (EXIT_FAILURE);
}

void
	ft_final_set_b(
		t_element **b,
		int n
	)
{
	const t_element	*maximum = ft_extreme_element(b, 1);
	const int		index = ft_indexstack(*b, maximum);
	int				i;

	i = ft_min_abs(index, index - n);

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
	ft_unload_b(
		t_element **a,
		t_element **b,
		int n
	)
{
	while (*b != NULL)
	{
		pa(a, b);
	}
	return (EXIT_SUCCESS);
}

void
	ft_final_set_a(
		t_element **a,
		int n
	)
{
	const t_element	*minimum = ft_extreme_element(a, -1);
	const int		index = ft_indexstack(*a, minimum);
	int				i;

	i = ft_min_abs(index, index - n);

	while (i > 0)
	{
		ra(a);
		i--;
	}
	while (i < 0)
	{
		rra(a);
		i++;
	}
}
