/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 23:59:00 by simon             #+#    #+#             */
/*   Updated: 2024/03/27 16:55:03 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// check duplicates

static int
	ft_maxint_check(
		const char *str
	)
{
	const int	len = ft_strlen(str);

	if (*str != '-' && len > 10
		|| len > 11)
		return (EXIT_FAILURE);
	if (len == 11)
	{
		if (ft_strncmp(str, "-2147483648", 11) > 0)
			return (EXIT_FAILURE);
	}
	if (len == 10)
	{
		if (ft_strncmp(str, "2147483647", 10) > 0)
			return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

static t_element	*
	ft_stacknew(
		const char *arg
	)
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

static t_element	*
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
	if (**stack_a == NULL)
		return (EXIT_FAILURE);
	*stack_b = (t_element **)malloc(sizeof(t_element *));
	if (*stack_b == NULL)
		return (EXIT_FAILURE);
	**stack_b = NULL;
	return (EXIT_SUCCESS);
}
