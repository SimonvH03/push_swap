/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 23:05:27 by simon             #+#    #+#             */
/*   Updated: 2024/05/27 17:51:34 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int
	ft_min_abs(
		int a,
		int b
	)
{
	if (ft_abs(a) <= ft_abs(b))
		return (a);
	else
		return (b);
}

int
	ft_max(
		int a,
		int b
	)
{
	if (a > b)
		return (a);
	else
		return (b);
}
