/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:05:34 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/28 23:51:23 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int
	sorted(
		t_element **a,
		t_element **b
	)
{
	t_element	*temp;
	int			pre_v_ous;

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
	sort_that_boie(
		t_element **a,
		t_element **b
	)
{
	if (sorted(a, b) == EXIT_SUCCESS)
		return (EXIT_SUCCESS);
	if (init_sort(a, b) == EXIT_SUCCESS)
		return (EXIT_SUCCESS);
	while (stacksize(*a) > 3)
		presort_b(a, b);
	sort_three(a);
	// print_both_stacks(a, b);
	final_set_b(b);
	unload_b(a, b);
	return (sorted(a, b));
}
