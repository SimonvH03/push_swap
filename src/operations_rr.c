/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:44:16 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 13:41:42 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void
	rra(
		t_elem **a
	)
{
	write(1, "rra\n", 2);
	ft_reverse_rotate(a);
}

void
	rrb(
		t_elem **b
	)
{
	write(1, "rrb\n", 2);
	ft_reverse_rotate(b);
}

void
	rrr(
		t_elem **a,
		t_elem **b
	)
{
	write(1, "rrr\n", 2);
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
}
