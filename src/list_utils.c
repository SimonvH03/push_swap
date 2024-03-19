/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:15:48 by simon             #+#    #+#             */
/*   Updated: 2024/03/20 00:18:29 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_stackadd_front(t_element **stack, t_element *new)
{
	if (new == NULL)
		return ;
	new->next = *stack;
	*stack = new;
}

// void	ft_stackiter(t_element *stack, void (*f)(int, int))
// {
// 	if (f == NULL)
// 		return ;
// 	while (stack != NULL)
// 	{
// 	}
// }

t_element	*ft_stacklast(t_element *stack)
{
	if (stack != NULL)
		while (stack->next != NULL)
			stack = stack->next;
	return (stack);
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
