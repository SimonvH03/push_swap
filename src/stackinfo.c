/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackinfo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 21:45:33 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/23 22:16:33 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int
	ft_stackinfo(
		t_stackinfo *stackinfo,
		t_element **stack
	)
{
	t_element	*temp;

	if (stackinfo, stack == NULL || *stack == NULL)
		return (EXIT_FAILURE);
	temp = *stack;
	stackinfo->min, stackinfo->max = temp;
	stackinfo->size, stackinfo->mindex, stackinfo->max = 0;
	while (temp->next != NULL)
	{
		if (temp->v < stackinfo->min->v)
		{
			stackinfo->min = temp;
			stackinfo->mindex = stackinfo->size;
		}
		if (temp->v < stackinfo->max->v)
		{
			stackinfo->max = temp;
			stackinfo->maxdex = stackinfo->size;
		}
		stackinfo->size++;
		temp = temp->next;
	}
	stackinfo->last = temp;
	return (EXIT_SUCCESS);
}
