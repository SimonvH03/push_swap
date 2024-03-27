/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:44:16 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/27 16:51:18 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void
	ra(
		t_element **a
	)
{
	ft_printf("ra\n");
	ft_rotate(a);
}

void
	rb(
		t_element **b
	)
{
	ft_printf("rb\n");
	ft_rotate(b);
}

void
	rr(
		t_element **a,
		t_element **b
	)
{
	ft_printf("rr\n");
	ft_rotate(a);
	ft_rotate(b);
}
