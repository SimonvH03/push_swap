/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_elements.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:23:27 by simon             #+#    #+#             */
/*   Updated: 2024/03/19 21:48:29 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_element	*
	ft_create_stack_a(
		int argc,
		char	**argv
	)
{
	t_element	*stack;
	t_element	*new;
	int		i;

	i = argc - 1;
	stack = ft_stacknew(argv[i]);
	if (stack == NULL)
		return (NULL);
	while (i > 1)
	{
		i--;
		new = ft_stacknew(argv[i]);
		if (new == NULL)
			return (NULL);
		ft_stackadd_front(&stack, new);
	}
	return (stack);
}
