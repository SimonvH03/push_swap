/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:05:34 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/20 21:13:13 by svan-hoo         ###   ########.fr       */
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
	ft_printf("\e[33mSorting...\e[0m\n");
	if (ft_sorted(a, b) == EXIT_SUCCESS)
		return (EXIT_SUCCESS);
	if (ft_init_sort(a, b, n) == EXIT_SUCCESS)
		return (EXIT_SUCCESS);
	ft_presort_b(a, b, n);
	ft_sort_three(a);
	return (ft_sorted(a, b));
}
