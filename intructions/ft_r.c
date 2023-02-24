/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:00:22 by elisa             #+#    #+#             */
/*   Updated: 2023/02/22 18:41:16 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack *groot)
{
	t_plates	*temp;
	t_plates	*first;

	if (groot->a && groot->a->next)
	{
		temp = groot->a;
		groot->a = groot->a->next;
		first = groot->a;
		while (groot->a->next)
			groot->a = groot->a->next;
		temp->next = NULL;
		groot->a = first;
	}	
}

void	ft_rb(t_stack *groot)
{
	t_plates	*temp;
	t_plates	*first;

	if (groot->b && groot->b->next)
	{
		temp = groot->b;
		groot->b = groot->b->next;
		first = groot->b;
		while (groot->b->next)
			groot->b = groot->b->next;
		temp->next = NULL;
		groot->b = first;
	}	
}

void	ft_rr(t_stack *groot)
{
	ft_ra(groot);
	ft_rb(groot);
}
