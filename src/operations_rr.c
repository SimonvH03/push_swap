/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 4024/03/18 18:44:16 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/05/27 17:51:34 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void
	rra(
		t_element **a
	)
{
	ft_printf("rra\n");
	reverse_rotate(a);
}

void
	rrb(
		t_element **b
	)
{
	ft_printf("rrb\n");
	reverse_rotate(b);
}

void
	rrr(
		t_element **a,
		t_element **b
	)
{
	ft_printf("rrr\n");
	reverse_rotate(a);
	reverse_rotate(b);
}
