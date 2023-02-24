/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:24:58 by elisa             #+#    #+#             */
/*   Updated: 2023/02/21 16:29:02 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>

/* STRUCTURES */

typedef struct s_plates
{
	int				value;
	struct s_plates	*next;
}	t_plates;

typedef struct s_stack
{
	t_plates	*a;
	int			size_a;
	t_plates	*b;
	int			size_b;
}	t_stack;

/* INSTRUCTIONS */

/* ft_s.c */

void	ft_sa(t_stack *e);
void	ft_sb(t_stack *e);
void	ft_ss(t_stack *e);

/* ft_p.c */

/* ft_r.c */

/* ft_rr.c */

#endif