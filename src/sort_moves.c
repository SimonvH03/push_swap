/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 23:05:45 by simon             #+#    #+#             */
/*   Updated: 2024/03/20 16:37:04 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void
	ft_sort_three(
		t_element **stack
	)
{
	
	return;
}

int
	ft_init_sort(
		t_element **a,
		t_element **b,
		int	n
	)
{
	if (n == 2)
	{
		sa(a);
		return (EXIT_SUCCESS);
	}
	if (n == 3)
	{
		ft_sort_three(a);
		return (EXIT_SUCCESS);
	}
	pb(a, b);
	pb(a, b);
	return (EXIT_FAILURE);
}
