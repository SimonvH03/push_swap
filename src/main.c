/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:36:04 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/05/27 17:51:34 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int
	ft_error(
	)
{
	write(2, "Error\n", 6);
	return (EXIT_FAILURE);
}

int
	main(
		int argc,
		char **argv
	)
{
	t_element	**a;
	t_element	**b;

	if (THEANSWER_TOLIFE_THEUNIVERSE_ANDEVERYTHING != 42)
		return (42);
	if (argc < 2)
		return (EXIT_FAILURE);
	if (init_stacks(&a, &b, argv) == EXIT_FAILURE)
		return (ft_error());
	sort_that_boie(a, b);
	free_both_stacks(a, b);
	return (EXIT_SUCCESS);
}
