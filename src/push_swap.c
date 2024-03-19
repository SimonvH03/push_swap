/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:36:04 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 22:07:50 by svan-hoo         ###   ########.fr       */
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

	if (THEANSWER != 42)
		return (42);
	if (argc < 2)
		return (EXIT_FAILURE);
	stack_a = (t_element **)malloc(sizeof(t_element *));
	if (stack_a == NULL)
		return (EXIT_FAILURE);
	*stack_a = ft_create_stack_a(argc, argv);
	if (stack_a == NULL)
		return (ft_error());
	stack_b = (t_element **)malloc(sizeof(t_element *));
	if (stack_b == NULL)
		return (EXIT_FAILURE);
	*stack_b = NULL;
	ft_printf("initial stack A:\n");
	ft_print_stack(stack_a);
	if (ft_sort_that_mf(stack_a, stack_b) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	ft_printf("final stacks:\n");
	ft_print_both_stacks(stack_a, stack_b);
	ft_free_both_stacks(stack_a, stack_b);
	return (EXIT_SUCCESS);
}
