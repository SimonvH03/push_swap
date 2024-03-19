/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:05:34 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 23:24:33 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int
	ft_sorted(
		t_element **a,
		t_element **b
	)
{
	t_element	*temp;
	int		pre_v_ous;

	if (*b)
		return (EXIT_FAILURE);
	temp = *a;
	if (temp == NULL)
		return (EXIT_SUCCESS);
	pre_v_ous = temp->v;
	while (temp != NULL)
	{
		if (temp->v < pre_v_ous)
			return (EXIT_FAILURE);
		pre_v_ous = temp->v;
		temp = temp->next;
	}
	return (EXIT_SUCCESS);
}

int
	ft_sort_that_mf(
		t_element **a,
		t_element **b,
		int n
	)
{
	int			cap;

	cap = 0;
	ft_printf("\e[33mSorting...\e[0m\n");
	if (ft_init_sort(a, b, n) == EXIT_SUCCESS)
		return (EXIT_SUCCESS);
	while (ft_sorted(a, b) == EXIT_FAILURE && cap < MAXITERATIONS)
	{
		ft_print_both_stacks(a, b);
		cap++;
	}
	if (cap == MAXITERATIONS)
		ft_printf("\e[33mCapped\e[0m\n");
	if (ft_sorted(a, b) == EXIT_SUCCESS)
		ft_printf("\e[32mSORTED\e[0m\n");
	return (EXIT_SUCCESS);
}
