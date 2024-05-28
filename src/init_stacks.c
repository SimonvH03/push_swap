/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 23:59:00 by simon             #+#    #+#             */
/*   Updated: 2024/05/28 14:45:03 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int
	check_duplicates(
		t_element **stack
	)
{
	t_element	*temp;
	t_element	*check;

	if (stack == NULL)
		return (EXIT_SUCCESS);
	temp = *stack;
	while (temp != NULL)
	{
		check = *stack;
		while (check != NULL)
		{
			if (temp->v == check->v
				&& temp != check)
				return (EXIT_FAILURE);
			check = check->next;
		}
		temp = temp->next;
	}
	return (EXIT_SUCCESS);
}

static int
	arg_check(
		const char *str
	)
{
	const int	len = ft_strlen(str);
	int			i;

	i = 0;
	if (str[0] == '-' && len > 1)
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (EXIT_FAILURE);
		i++;
	}
	if ((*str != '-' && len > 10) || len > 11 || len == 0)
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
	stacknew(
		const char *arg
	)
{
	t_element	*new;

	new = (t_element *)malloc(sizeof(t_element));
	if (new == NULL)
		return (NULL);
	if (arg_check(arg) == EXIT_FAILURE)
		return (NULL);
	new->v = ft_atoi(arg);
	new->path = (t_path){0, 0};
	new->next = NULL;
	return (new);
}

static t_element	*
	create_stack_a(
		char **argv
	)
{
	t_element	*stack;
	t_element	*new;
	int			i;

	stack = stacknew(argv[1]);
	if (stack == NULL)
		return (NULL);
	i = 2;
	while (argv[i] != NULL)
	{
		new = stacknew(argv[i]);
		if (new == NULL)
			return (NULL);
		stackadd_back(&stack, new);
		i++;
	}
	if (check_duplicates(&stack) == EXIT_FAILURE)
		return (NULL);
	return (stack);
}

int
	init_stacks(
		t_element ***stack_a,
		t_element ***stack_b,
		char **argv
	)
{
	*stack_a = (t_element **)malloc(sizeof(t_element *));
	if (*stack_a == NULL)
		return (EXIT_FAILURE);
	**stack_a = NULL;
	**stack_a = create_stack_a(argv);
	if (**stack_a == NULL)
		return (EXIT_FAILURE);
	*stack_b = (t_element **)malloc(sizeof(t_element *));
	if (*stack_b == NULL)
		return (EXIT_FAILURE);
	**stack_b = NULL;
	return (EXIT_SUCCESS);
}

// int	indexstack(const t_element *haystack, const t_element *needle)
// {
// 	int	index;

// 	index = 0;
// 	while (haystack != NULL && haystack != needle)
// 	{
// 		index++;
// 		haystack = haystack->next;
// 	}
// 	return (index);
// }

// t_element	*stackindex(t_element *stack, int index)
// {
// 	while (stack != NULL && index--)
// 		stack = stack->next;
// 	return (stack);
// }
