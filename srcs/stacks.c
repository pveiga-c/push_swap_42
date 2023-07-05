/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:44:18 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/05 17:33:57 by pveiga-c         ###   ########.fr       */
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
	{
		*stack = new_node;
		(*stack)->next = NULL;
	}
	else
	{
		tail = find_tail(*stack);
		tail->next = new_node;
	}
}

t_stack	*find_tail(t_stack *tail)
{
	if (!tail)
		return (NULL);
	while (tail->next != NULL)
		tail = tail->next;
	return (tail);
}

t_stack	*ft_fill_stack(int argc, char **argv)
{
	int		i;
	long	tmp;
	t_stack	*stack;

	i = 1;
	stack = NULL;
	while (argc > i)
	{
		tmp = ft_atoi(argv[i]);
		ft_add(&stack, ft_stacknew(tmp));
		i++;
	}
	return (stack);
}

void	ft_free_stack(t_stack *stack)
{
	t_stack	*current;
	t_stack	*next;

	stack = current;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
