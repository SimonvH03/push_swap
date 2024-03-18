/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:13:48 by svan-hoo          #+#    #+#             */
/*   Updated: 2024/03/18 23:11:03 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "stdio.h"
# include "stdlib.h"

# define THEANSWER 42

typedef struct s_elem
{
	int		v;
	t_elem	*next;
}	t_elem;

/// OPERATIONS
// operations_s_p.c
void		sa(t_elem **a);
void		sb(t_elem **b);
void		ss(t_elem **a, t_elem **b);

void		pa(t_elem **a, t_elem **b);
void		pb(t_elem **a, t_elem **b);

// operations_r.c
void		ra(t_elem **a);
void		rb(t_elem **b);
void		rr(t_elem **a, t_elem **b);

// operations_rr.c
void		rra(t_elem **a);
void		rrb(t_elem **b);
void		rrr(t_elem **a, t_elem **b);

// Utils
void		swap(t_elem **stack);
void		push(t_elem **dest, t_elem **src);

#endif