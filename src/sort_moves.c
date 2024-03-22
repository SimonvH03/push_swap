/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 23:05:45 by simon             #+#    #+#             */
/*   Updated: 2024/03/22 22:09:39 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
	// ft_print_both_stacks(a, b);
	ft_sort_three(a);
	// ft_print_both_stacks(a, b);
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
	// ft_print_both_stacks(a, b);
	return (EXIT_FAILURE);
}

int
	ft_presort_b(
		t_element **a,
		t_element **b,
		int n
	)
{
	// int	cap;

	// ft_print_both_stacks(a, b);
	// cap = 0;
	while (ft_stacksize(*a) > 3)
	{
		ft_find_cheapest_insertion(a, b, n);
		// ft_printf("\e[33m[%d]\e[0m\n", cap);
		// ft_print_both_stacks(a, b);
	}
	// if (cap == MAXITERATIONS)
	// 	ft_printf("\e[33mCapped\e[0m\n");
	return (EXIT_SUCCESS);
}

int
	ft_unload_b(
		t_element **a,
		t_element **b,
		int n
	)
{
	const t_element	*minimum = ft_extreme_element(a, -1);

	while (*b != NULL)
	{
		if (minimum->v < (*b)->v)
		{
			while (ft_stacklast(*a)->v > (*b)->v)
			{
				rra(a);
				// ft_print_both_stacks(a, b);
			}
		}
		pa(a, b);
	}
	// ft_print_both_stacks(a, b);
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
