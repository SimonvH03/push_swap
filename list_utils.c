/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:15:48 by simon             #+#    #+#             */
/*   Updated: 2024/03/18 23:22:08 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stackadd_front(t_elem **stack, t_elem *new)
{
	if (new == NULL)
		return ;
	new->next = *stack;
	*stack = new;
}

void	ft_stackiter(t_elem *stack, void (*f)(void *))
{
	if (f == NULL)
		return ;
	while (stack != NULL)
	{
		f(stack->v);
		stack = stack->next;
	}
}

t_elem	*ft_stacklast(t_elem *stack)
{
	if (stack != NULL)
		while (stack->next != NULL)
			stack = stack->next;
	return (stack);
}

t_elem	*ft_stackmap(t_elem *stack, void *(*f)(void *), void (*del)(void *))
{
	t_elem	*first;
	t_elem	*newnode;
	void	*tmpcont;

	if (stack == NULL || del == NULL || f == NULL)
		return (NULL);
	first = NULL;
	while (stack)
	{
		tmpcont = f(stack->v);
		newnode = ft_stacknew(tmpcont);
		if (newnode == NULL)
		{
			del(tmpcont);
			ft_stackclear(&first, del);
			return (NULL);
		}
		stack = stack->next;
		ft_stackadd_back(&first, newnode);
	}
	return (first);
}

t_elem	*ft_stacknew(void *v)
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
