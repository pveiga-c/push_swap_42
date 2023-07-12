/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:44:18 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/12 15:51:51 by pveiga-c         ###   ########.fr       */
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

void	ft_add(t_stack **s, t_stack *new_node)
{
	t_stack	*tail;

	if (*s == NULL)
	{
		*s = new_node;
		(*s)->next = NULL;
	}
	else
	{
		tail = find_tail(*s);
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
	t_stack	*s;

	i = 1;
	s = NULL;
	while (argc > i)
	{
		tmp = ft_atoi(argv[i]);
		ft_add(&s, ft_stacknew(tmp));
		i++;
	}
	return (s);
}

void	ft_free_stack(t_stack *s)
{
	t_stack	*current;
	t_stack	*next;

	current = s;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
