/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 23:05:27 by simon             #+#    #+#             */
/*   Updated: 2024/03/23 21:38:14 by svan-hoo         ###   ########.fr       */
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
	ft_abs(int value)
{
	if (value < 0)
		return (-value);
	else
		return (value);
}

int
	ft_min_abs(int a, int b)
{
	if (ft_abs(a) <= ft_abs(b))
		return (a);
	else
		return (b);
}
