/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presort_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:24:49 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/05/28 14:46:26 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int
	total_path_length(
		t_path path
	)
{
	int	total;

	if ((path.a >= 0) == (path.b >= 0))
		total = ft_max(ft_abs(path.a), ft_abs(path.b));
	else
		total = ft_abs(path.a) + ft_abs(path.b);
	return (total);
}

// void
// 	execute_cheapest_insertion(
// 		t_element **a,
// 		t_element **b
// 	)
// {
// 	t_element		*a_temp;
// 	t_element		*a_optimal;
// 	int				v;
// 	int				v_temp;

// 	// int	i;
// 	// const int	n = stacksize(*a);
// 	// i = 0;

// 	a_temp = *a;
// 	a_optimal = a_temp;
// 	v = total_path_length(a_temp->path);
// 	while (a_temp != NULL)
// 	{
// 		v_temp = total_path_length(a_temp->path);
// 		if (v_temp < v)
// 		{
// 			v = v_temp;
// 			a_optimal = a_temp;
// 		}
// 		// if (n > 60)
// 		// {
// 		// 	printf("[%d]	\e[3%dm%d\e[0m\n", i, v_temp / 10, v_temp);
// 		// 	i++;
// 		// }
// 		a_temp = a_temp->next;
// 	}
// 	// printf("\e[33m(%d) %2d %2d  = %2d\e[0m\n", a_optimal->v, a_optimal->path.a, a_optimal->path.b, v);
// 	// print_both_stacks(a, b);
// 	move(a, b, a_optimal->path);
// }

static void
	execute_cheapest_insertion(
		t_element **a,
		t_element **b
	)
{
	t_element		*a_temp;
	t_element		*a_optimal;
	int				v;
	int				v_temp;

	a_temp = *a;
	a_optimal = a_temp;
	v = total_path_length(a_temp->path);
	while (a_temp != NULL)
	{
		v_temp = total_path_length(a_temp->path);
		if (v_temp < v)
		{
			v = v_temp;
			a_optimal = a_temp;
		}
		a_temp = a_temp->next;
	}
	move(a, b, a_optimal->path);
}

static int
	find_b_index(
		t_element **b,
		int val
	)
{
	t_element	*b_temp;
	int			b_index;
	t_stackinfo	info;

	stackinfo(&info, b);
	if (val < info.min->v)
		return (info.mindex + 1);
	if (val > info.max->v)
		return (info.maxdex);
	b_index = 0;
	b_temp = *b;
	if (val > b_temp->v)
	{
		while (b_temp != NULL && val > b_temp->v)
		{
			b_index++;
			b_temp = b_temp->next;
		}
	}
	while (b_temp != NULL && b_temp->v > val)
	{
		b_index++;
		b_temp = b_temp->next;
	}
	return (b_index);
}

// find the number in a that can be pushed to b requiring the least operations
// rx is how many times to rotate stack x before pushing to b
// negative means reverse rotations
// per index in stack A see the path to stack B
// if A + B (- doubles) < index, immediately execute
// this should be limited to 25% of total size (n) up and down stack A
// potential! when rotating A to push to B, always evaluate sa(A)!
// 	probably invert B polarity when swapping A
// if consequent moves go opposite directions, maybe save 1 move by swapping instead of the last rb
void
	presort_b(
		t_element **a,
		t_element **b
	)
{
	t_element		*a_temp;
	int				a_index;
	int				b_index;
	const int		a_size = stacksize(*a);
	const int		b_size = stacksize(*b);

	a_temp = *a;
	a_index = 0;
	while (a_temp != NULL)
	{
		b_index = find_b_index(b, a_temp->v);
		a_temp->path.a = ft_min_abs(a_index, a_index - a_size);
		a_temp->path.b = ft_min_abs(b_index, b_index - b_size);
		a_index++;
		a_temp = a_temp->next;
	}
	execute_cheapest_insertion(a, b);
}
