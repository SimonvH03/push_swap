/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:28:48 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/05/27 17:51:34 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void
	print_stack(
		t_element **stack
	)
{
	int			i;
	t_element	*temp;

	i = 1;
	temp = *stack;
	while (temp)
	{
		printf("[%d] %-10d\n", i++, temp->v);
		temp = temp->next;
	}
}

void
	print_both_stacks(
		t_element **a,
		t_element **b
	)
{
	int			i;
	t_element	*temp_a;
	t_element	*temp_b;

	i = 1;
	temp_a = *a;
	temp_b = *b;
	printf("\e[30m[top]  [A]        [B]\e[0m\n");
	while (temp_a || temp_b)
	{
		printf("[%d]\t", i++);
		if (temp_a)
		{
			printf("\e[31m%-10d", temp_a->v);
			temp_a = temp_a->next;
		}
		else
			printf("          ");
		if (temp_b)
		{
			printf(" \e[31m%-10d", temp_b->v);
			temp_b = temp_b->next;
		}
		printf("\e[0m\n");
	}
}
