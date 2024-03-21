/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 23:05:27 by simon             #+#    #+#             */
/*   Updated: 2024/03/20 23:23:26 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
