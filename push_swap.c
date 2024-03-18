/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:36:04 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 00:00:52 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int
	main(
		int argc,
		char **argv)
{
	t_elem **stack_a;
	t_elem **stack_b;

	if (THEANSWER != 42)
		return (42);
	if (argc <= 2)
		return (EXIT_FAILURE);
	stack_a = create_elements(argv);
	if (stack_a == NULL)
		return (EXIT_FAILURE);
}
