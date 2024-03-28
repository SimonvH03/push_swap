/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 23:05:27 by simon             #+#    #+#             */
/*   Updated: 2024/03/28 16:52:53 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
