/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:13:48 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/19 22:15:35 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

# define THEANSWER 42

# ifndef MAXITERATIONS
#  define MAXITERATIONS 10
# endif

typedef struct s_element
{
	int				v;
	struct s_element	*next;
}	t_element;

// init
t_element	*ft_create_stack_a(int argc, char **argv);

// main
int			ft_sort_that_mf(t_element **stack_a, t_element **stack_b);

/// OPERATIONS
// operations_s_p.c
void		sa(t_element **a);
void		sb(t_element **b);
void		ss(t_element **a, t_element **b);

void		pa(t_element **a, t_element **b);
void		pb(t_element **a, t_element **b);

// operations_r.c
void		ra(t_element **a);
void		rb(t_element **b);
void		rr(t_element **a, t_element **b);

// operations_rr.c
void		rra(t_element **a);
void		rrb(t_element **b);
void		rrr(t_element **a, t_element **b);

// operation logic
void		ft_swap(t_element **stack);
void		ft_push(t_element **dest, t_element **src);
void		ft_rotate(t_element **stack);
void		ft_reverse_rotate(t_element **stack);

// list utils
void		ft_stackadd_front(t_element **stack, t_element *new);
t_element	*ft_stacklast(t_element *stack);
t_element	*ft_stacknew(const char *arg);
int			ft_stacksize(t_element *stack);
void		ft_free_both_stacks(t_element **a, t_element **b);

// utils
int			ft_maxint_check(const char *str);

// test utils
void		ft_print_stack(t_element **stack);
void		ft_print_both_stacks(t_element **a, t_element **b);

#endif