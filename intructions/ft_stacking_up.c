/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacking_up.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:41:08 by elisa             #+#    #+#             */
/*   Updated: 2023/02/22 18:24:32 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_plates	*ft_lstnew(void *value)
{
	t_plates	*new;

	new = malloc(sizeof(t_plates));
	if (!new)
		return (NULL);
	new->value = value;
	new->next = NULL;
	return (new);
}

t_plates	*ft_lstlast(t_plates *lst)
{
	if (lst)
		while (lst->next)
			lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_plates **first, t_plates *new)
{
	t_plates	*last;

	if (*first == NULL)
	{
		*first = new;
		return ;
	}
	last = ft_lstlast(*(first));
	last->next = new;
}

void	ft_lstdelone(t_plates *lst)
{
	if (lst != NULL)
	{
		free(lst);
	}
}

t_plates	*ft_lstlast(t_plates *lst)
{
	if (lst)
		while (lst->next)
			lst = lst->next;
	return (lst);
}
