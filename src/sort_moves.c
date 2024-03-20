/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 23:05:45 by simon             #+#    #+#             */
/*   Updated: 2024/03/20 21:47:16 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// if order is ascending (1 2 3, 2 3 1, 3 1 2) no swaps are needed
// if order is descending (2 1 3, 3 2 1, 1 3 2) one swap is needed
// a rotate or reverse rotate can be used to get the correct position
// comparing the middle value (2) twice determines a certain permutation
// the first three cases in this function are ascending, the last descending
// each group is ordered depending on the position of the middle value (2)
// for example: 1 3 2 (last case in function)
// third value is bigger than the first but smaller than the second; it is (2)
// also, since the second is bigger than the third, the order is descending
// this means we need to swap, but first put (3) on the bottom of the stack
void
	ft_sort_three(
		t_element **stack
	)
{
	const int	a__ = (*stack)->v;
	const int	_b_ = (*stack)->next->v;
	const int	__c = (*stack)->next->next->v;

	if (a__ < _b_ && a__ > __c)
		rra(stack);
	if (_b_ < __c && _b_ > a__)
		return ;
	if (__c < a__ && __c > _b_)
		ra(stack);
	if (a__ < __c && a__ > _b_)
		sa(stack);
	if (_b_ < a__ && _b_ > __c)
	{
		ra(stack);
		sa(stack);
	}
	if (__c < _b_ && __c > a__)
	{
		rra(stack);
		sa(stack);
	}
	return ;
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
	pb(a, b);
	pb(a, b);
	return (EXIT_FAILURE);
}

int
	ft_presort_b(
		t_element **a,
		t_element **b,
		int n
	)
{
	int	cap;

	cap = 0;
	while (ft_stacksize(*a) > 3 && cap++ < MAXITERATIONS)
	{
		ft_find_cheapest_insertion(a, b, n);
		ft_printf("\e[33m[%d]\e[0m\n", cap);
		ft_print_both_stacks(a, b);
	}
	if (cap == MAXITERATIONS)
		ft_printf("\e[33mCapped\e[0m\n");
	return (EXIT_SUCCESS);
}
