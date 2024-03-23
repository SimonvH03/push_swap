/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:13:48 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/23 22:13:11 by svan-hoo         ###   ########.fr       */
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

typedef struct s_path
{
	int	a_rotations;
	int	b_rotations;
}	t_path;

typedef struct s_element
{
	int					v;
	t_path				path;
	struct s_element	*next;
}	t_element;

typedef struct s_stackinfo
{
	t_element	*min;
	t_element	*max;
	int			mindex;
	int			maxdex;
	t_element	*last;
	int			size;
}	t_stackinfo;

// init / parse
int			ft_init_stacks(t_element ***a, t_element ***b, char **argv);
int			ft_maxint_check(const char *str);
//int		ft_check_duplicates

// main
int			ft_sort_that_mf(t_element **a, t_element **b, int n);

// stackinfo
int			ft_stackinfo(t_stackinfo *stackinfo, t_element **stack);

// sort moves
int			ft_init_sort(t_element **a, t_element **b, int n);
void		ft_sort_three(t_element **stack);

// presort b
void		ft_presort_b(t_element **a, t_element **b, int n);
int			ft_unload_b(t_element **a, t_element **b, int n);
void		ft_final_set_a(t_element **a, int n);

// operation logic
void		ft_swap(t_element **stack);
void		ft_push(t_element **dest, t_element **src);
void		ft_rotate(t_element **stack);
void		ft_reverse_rotate(t_element **stack);

// list utils
void		ft_stackadd_front(t_element **stack, t_element *new);
t_element	*ft_stacknew(const char *arg);
t_element	*ft_stack_iteration(t_element *stack, int (*f)(t_element *));
int			ft_stacksize(t_element *stack);
t_element	*ft_stacklast(t_element *stack);
int			ft_indexstack(const t_element *haystack, const t_element *needle);
t_element	*ft_stackindex(t_element *stack, int index);

// sort utils
t_element	*ft_extreme_element(t_element **stack, short sign);
int			ft_abs(int val);
int			ft_min_abs(int a, int b);

// utils
void		ft_free_both_stacks(t_element **a, t_element **b);

// test utils
void		ft_print_stack(t_element **stack);
void		ft_print_both_stacks(t_element **a, t_element **b);

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

#endif