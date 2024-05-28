/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:13:48 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/05/28 14:43:51 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

# define THEANSWER_TOLIFE_THEUNIVERSE_ANDEVERYTHING 42

typedef struct s_path
{
	int	a;
	int	b;
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

typedef void	(operation)(t_element **);
typedef void	(double_operation)(t_element **, t_element **);

typedef struct s_move
{
	operation			*rotate_a;
	operation			*rotate_b;
	double_operation	*rotate_both;
}	t_move;

// init
int			init_stacks(t_element ***a, t_element ***b, char **argv);

// main
int			sort_that_boie(t_element **a, t_element **b);

// stackinfo
int			stackinfo(t_stackinfo *stackinfo, t_element **stack);

// sort moves
int			init_sort(t_element **a, t_element **b);
void		sort_three(t_element **stack);
void		final_set_b(t_element **stack);
int			unload_b(t_element **a, t_element **b);

// algorithm
void		presort_b(t_element **a, t_element **b);
void		move(t_element **a, t_element **b, t_path path);

// list utils
t_element	*stacklast(t_element *stack);
void		stackadd_back(t_element **stack, t_element *new);
int			stacksize(t_element *stack);
t_element	*extreme_element(t_element **stack, short sign);

// number utils
int			ft_abs(int val);
int			ft_min_abs(int a, int b);
int			ft_max(int a, int b);

// utils
void		free_both_stacks(t_element **a, t_element **b);

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