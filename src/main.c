/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:36:04 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/22 22:10:17 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
	t_element	**stack_a;
	int			n;
	t_element	**stack_b;

	if (THEANSWER != 42)
		return (42);
	if (argc < 2)
		return (EXIT_FAILURE);
	if (ft_init_stacks(&stack_a, &stack_b, argv) == EXIT_FAILURE)
		return (ft_error());
	// ft_printf("initial stack A:\n");
	// ft_print_stack(stack_a);
	n = ft_stacksize(*stack_a);
	ft_sort_that_mf(stack_a, stack_b, n);
	// if (ft_sort_that_mf(stack_a, stack_b, n) == EXIT_SUCCESS)
	// 	ft_printf("\e[32mSORTED\e[0m\n");
	// else
	// 	ft_printf("\e[31mNOT SORTED\e[0m\n");
	// ft_printf("result:\n");
	// ft_print_both_stacks(stack_a, stack_b);
	ft_free_both_stacks(stack_a, stack_b);
	return (EXIT_SUCCESS);
}
