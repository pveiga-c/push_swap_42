/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:44:18 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/04 19:39:07 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_stacknew(long nbr)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->nbr = nbr;
	new_node->next = NULL;
	return (new_node);
}

void	ft_add(t_stack **stack, t_stack *new_node)
{
	t_stack	*tail;

	if (*stack == NULL)
		*stack = new_node;
	else
	{
		tail = find_tail(*stack);
		tail->next = new_node;
	}
}

t_stack	*find_tail(t_stack *tail)
{
	t_stack *last;
	
	last = tail;
	if (!last)
		return (NULL);
	while (last->next != NULL)
		last = last->next;
	return (last);
}
