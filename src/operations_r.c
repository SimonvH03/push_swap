/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:44:16 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/05/27 17:51:34 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void
	ra(
		t_element **a
	)
{
	ft_printf("ra\n");
	rotate(a);
}

void
	rb(
		t_element **b
	)
{
	ft_printf("rb\n");
	rotate(b);
}

void
	rr(
		t_element **a,
		t_element **b
	)
{
	ft_printf("rr\n");
	rotate(a);
	rotate(b);
}
