/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:44:16 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/23 21:38:14 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
