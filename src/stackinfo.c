/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackinfo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 21:45:33 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/24 16:16:05 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void
	ft_stackinfo_init(
		t_stackinfo *stackinfo,
		t_element *first_element
	)
{
	stackinfo->min = first_element;
	stackinfo->max = first_element;
	stackinfo->size = 0;
	stackinfo->mindex = 0;
	stackinfo->maxdex = 0;
}

int
	ft_stackinfo(
		t_stackinfo *stackinfo,
		t_element **stack
	)
{
	t_element	*temp;

	if (stackinfo == NULL || stack == NULL || *stack == NULL)
		return (EXIT_FAILURE);
	ft_stackinfo_init(stackinfo, *stack);
	temp = *stack;
	while (temp != NULL)
	{
		if (temp->v < stackinfo->min->v)
		{
			stackinfo->min = temp;
			stackinfo->mindex = stackinfo->size;
		}
		if (temp->v > stackinfo->max->v)
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
