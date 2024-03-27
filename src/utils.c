/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:42:26 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/27 16:51:18 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void
	ft_free_both_stacks(
		t_element **a,
		t_element **b
	)
{
	t_element	*temp;

	while (*a)
	{
		temp = (*a)->next;
		free(*a);
		*a = temp;
	}
	free(a);
	while (*b)
	{
		temp = (*b)->next;
		free(*b);
		*b = temp;
	}
	free(b);
}
