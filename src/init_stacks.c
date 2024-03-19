/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 23:59:00 by simon             #+#    #+#             */
/*   Updated: 2024/03/20 00:26:03 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void
	ft_rank_stack_a(
		t_element *stack_a
	)
{
	return ;
}

t_element	*
	ft_create_stack_a(
		char **argv
	)
{
	t_element	*stack;
	t_element	*new;
	int		i;

	stack = ft_stacknew(argv[1]);
	if (stack == NULL)
		return (NULL);
	i = 2;
	while (argv[i] != NULL)
	{
		new = ft_stacknew(argv[i]);
		if (new == NULL)
			return (NULL);
		ft_stackadd_front(&stack, new);
		i++;
	}
	return (stack);
}

int
	ft_init_stacks(
		t_element ***stack_a,
		t_element ***stack_b,
		char **argv
	)
{
	*stack_a = (t_element **)malloc(sizeof(t_element *));
	if (*stack_a == NULL)
		return (EXIT_FAILURE);
	**stack_a = NULL;
	**stack_a = ft_create_stack_a(argv);
	if (*stack_a == NULL)
		return (EXIT_FAILURE);
	// ft_rank_stack_a(*stack_a);
	*stack_b = (t_element **)malloc(sizeof(t_element *));
	if (*stack_b == NULL)
		return (EXIT_FAILURE);
	**stack_b = NULL;
	return (EXIT_SUCCESS);
}
