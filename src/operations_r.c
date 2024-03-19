/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:44:16 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 13:41:31 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void
	ra(
		t_elem **a
	)
{
	write(1, "ra\n", 2);
	ft_rotate(a);
}

void
	rb(
		t_elem **b
	)
{
	write(1, "rb\n", 2);
	ft_rotate(b);
}

void
	rr(
		t_elem **a,
		t_elem **b
	)
{
	write(1, "rr\n", 2);
	ft_rotate(a);
	ft_rotate(b);
}
