/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:05:34 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/23 21:38:14 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int
	ft_sorted(
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
	ft_sort_that_mf(
		t_element **a,
		t_element **b,
		int n
	)
{
	if (ft_init_sort(a, b, n) == EXIT_SUCCESS)
		return (EXIT_SUCCESS);
	while (*a)
		ft_presort_b(a, b, n);
	// ft_sort_three(a);
	ft_unload_b(a, b, n);
	ft_final_set_a(a, n);
	return (ft_sorted(a, b));
}
