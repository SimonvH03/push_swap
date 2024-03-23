/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:36:04 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/23 22:15:39 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int
	ft_error(
	)
{
	ft_printf("Error\n");
	return (EXIT_FAILURE);
}

int
	main(
		int argc,
		char **argv
	)
{
	t_element	**a;
	int			n;
	t_element	**b;

	if (THEANSWER != 42)
		return (42);
	if (argc < 2)
		return (EXIT_FAILURE);
	if (ft_init_stacks(&a, &b, argv) == EXIT_FAILURE)
		return (ft_error());
	// ft_printf("initial stack A:\n");
	// ft_print_stack(a);
	n = ft_stacksize(*a);
	ft_sort_that_mf(a, b, n);
	// if (ft_sort_that_mf(a, b, n) == EXIT_SUCCESS)
	// 	ft_printf("\e[32mSORTED\e[0m\n");
	// else
	// 	ft_printf("\e[31mNOT SORTED\e[0m\n");
	// ft_printf("result:\n");
	// ft_print_both_stacks(a, b);
	ft_free_both_stacks(a, b);
	return (EXIT_SUCCESS);
}
