/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:36:04 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 13:23:39 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_elem	**
	ft_create_elements(
		int argc,
		char	**argv
	)
{
	t_elem	**stack;
	int		i;

	stack = NULL;
	i = argc;
	while (i-- > 0)
	{
		printf("[%d]\t%s\n", i, argv[i]);
		ft_stackadd_front(stack, ft_stacknew(ft_atoi(argv[i])));
	}
	return (stack);
}

int
	main(
		int argc,
		char **argv)
{
	t_elem	**stack_a;
	t_elem	**stack_b;

	if (THEANSWER != 42)
		return (42);
	if (argc <= 2)
		return (EXIT_FAILURE);
	stack_a = ft_create_elements(argc, argv);
	if (stack_a == NULL)
		return (EXIT_FAILURE);
}
