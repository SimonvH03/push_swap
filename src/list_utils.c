/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:15:48 by simon             #+#    #+#             */
/*   Updated: 2024/03/20 16:41:22 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_element	*
	ft_stack_iteration(
		t_element *stack,
		int (*f)(t_element *)
	)
{
	if (f == NULL)
		return ;
	while (stack != NULL)
	{
		if (f(stack) == EXIT_SUCCESS)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
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
	new->next = NULL;
	return (new);
}

void	ft_stackadd_front(t_element **stack, t_element *new)
{
	if (new == NULL)
		return ;
	new->next = *stack;
	*stack = new;
}

int	ft_stacksize(t_element *stack)
{
	int	count;

	count = 0;
	while (stack != NULL)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}

t_element	*ft_stacklast(t_element *stack)
{
	if (stack != NULL)
		while (stack->next != NULL)
			stack = stack->next;
	return (stack);
}
