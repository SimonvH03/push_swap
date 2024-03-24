/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 23:05:27 by simon             #+#    #+#             */
/*   Updated: 2024/03/24 02:21:44 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_element	*
	ft_extreme_element(
		t_element **stack,
		short sign
	)
{
	t_element	*temp;
	t_element	*extreme;

	temp = *stack;
	extreme = temp;
	while (temp != NULL)
	{
		if (temp->v * sign > extreme->v * sign)
			extreme = temp;
		temp = temp->next;
	}
	return (extreme);
}

int
	ft_min_abs(
		int a,
		int b
	)
{
	if (ft_abs(a) <= ft_abs(b))
		return (a);
	else
		return (b);
}

int
	ft_max(
		int a,
		int b
	)
{
	if (a > b)
		return (a);
	else
		return (b);
}
