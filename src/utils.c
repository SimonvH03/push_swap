/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:42:26 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/07/01 20:18:21 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void
	free_both_stacks(
		t_element *a,
		t_element *b
	)
{
	t_element	*temp;

	while (a)
	{
		temp = (a)->next;
		free(a);
		a = temp;
	}
	while (b)
	{
		temp = (b)->next;
		free(b);
		b = temp;
	}
}
