/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:44:18 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/03 15:58:28 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_stacknew(long nbr)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->nbr = nbr;
	new_node->next = NULL;
	return (new_node);
}

void	ft_add_tail(t_stack **stack_a, t_stack *new_node)
{
	t_stack	*tail;

	if (!new_node)
		return ;
	if (!*stack_a)
	{
		*stack_a = new_node;
		return ;
	}
	tail = find_tail(*stack_a);
	tail->next = new_node;
}

t_stack	*find_tail(t_stack *stack_a)
{
	while (stack_a && stack_a->next != NULL)
		stack_a = stack_a->next;
	return (stack_a);
}
