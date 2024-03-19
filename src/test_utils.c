/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:28:48 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 22:11:00 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void
	ft_print_stack(
		t_element **stack
	)
{
	int		i;
	t_element	*temp;

	i = ft_stacksize(*stack);
	temp = *stack;
	while (temp != NULL)
	{
		ft_printf("[%d] %-10d\n", i, temp->v);
		temp = temp->next;
		i--;
	}
}

void
	ft_print_both_stacks(
		t_element **a,
		t_element **b
	)
{
	int		i;
	t_element	*temp_a;
	t_element	*temp_b;

	i = 0;
	temp_a = *a;
	temp_b = *b;
	while (temp_a || temp_b)
	{
		printf("[%d]\t", i);
		if (temp_a)
		{
			printf("%-10d", temp_a->v);
			temp_a = temp_a->next;
		}
		else
			printf("          ");
		if (temp_b)
		{
			printf(" %-10d", temp_b->v);
			temp_b = temp_b->next;
		}
		printf("\n");
		i++;
	}
}
