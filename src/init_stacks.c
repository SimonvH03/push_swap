/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 23:59:00 by simon             #+#    #+#             */
/*   Updated: 2024/03/23 21:38:14 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int
	ft_maxint_check(
		const char *str
	)
{
	return (EXIT_SUCCESS);
}

t_element	*ft_stacknew(const char *arg)
{
	t_element	*new;

	new = (t_element *)malloc(sizeof(t_element));
	if (new == NULL)
		return (NULL);
	if (ft_maxint_check(arg) == EXIT_FAILURE)
		return (NULL);
	new->v = ft_atoi(arg);
	new->path = (t_path){0, 0};
	new->next = NULL;
	return (new);
}

t_element	*
	ft_create_stack_a(
		char **argv
	)
{
	t_element	*stack;
	t_element	*new;
	int			i;

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
	*stack_b = (t_element **)malloc(sizeof(t_element *));
	if (*stack_b == NULL)
		return (EXIT_FAILURE);
	**stack_b = NULL;
	return (EXIT_SUCCESS);
}
