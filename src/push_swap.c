/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:36:04 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/20 00:09:15 by simon            ###   ########.fr       */
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
	t_element	**stack_b;
	int			n;

	if (THEANSWER != 42)
		return (42);
	if (argc < 2)
		return (EXIT_FAILURE);
	if (ft_init_stacks(&stack_a, &stack_b, argv) == EXIT_FAILURE)
		return (ft_error());
	ft_printf("initial stack A:\n");
	ft_print_stack(stack_a);
	n = ft_stacksize(*stack_a);
	if (ft_sort_that_mf(stack_a, stack_b, n) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	ft_printf("final stacks:\n");
	ft_print_both_stacks(stack_a, stack_b);
	ft_free_both_stacks(stack_a, stack_b);
	return (EXIT_SUCCESS);
}
