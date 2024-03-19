/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:15:48 by simon             #+#    #+#             */
/*   Updated: 2024/03/19 13:16:24 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_stackadd_front(t_elem **stack, t_elem *new)
{
	if (new == NULL)
		return ;
	new->next = *stack;
	*stack = new;
}

// void	ft_stackiter(t_elem *stack, void (*f)(int, int))
// {
// 	if (f == NULL)
// 		return ;
// 	while (stack != NULL)
// 	{
// 	}
// }

t_elem	*ft_stacklast(t_elem *stack)
{
	if (stack != NULL)
		while (stack->next != NULL)
			stack = stack->next;
	return (stack);
}

t_elem	*ft_stacknew(int v)
{
	t_elem	*new;

	new = (t_elem *)malloc(sizeof(t_elem));
	if (new == NULL)
		return (NULL);
	new->v = v;
	new->next = NULL;
	return (new);
}

int	ft_stacksize(t_elem *stack)
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
