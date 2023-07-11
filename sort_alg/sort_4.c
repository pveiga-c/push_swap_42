/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:00:40 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/11 15:31:35 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_find_min_4(t_stack *s)
{
	int		num_min;
	int		pos;
	t_stack	*s2;

	num_min = MAX;
	pos = 0;
	s2 = s;
	while (s != NULL)
	{
		if (s->nbr < num_min)
			num_min = s->nbr;
		s = s->next;
	}
	while (s2 != NULL && num_min != s2->nbr)
	{
		if (num_min != s2->nbr)
		{
			s2 = s2->next;
			pos++;
		}
	}
	return (pos);
}

void	ft_sort_4(t_stack **a, t_stack **b)
{
	int	pos;

	pos = ft_find_min_4(*a);
	if (pos <= (ft_stack_len(*a) / 2))
	{
		while (pos > 0)
		{
			ft_ra(a);
			pos--;
		}
	}
	else if (pos > (ft_stack_len(*a) / 2))
	{
		while (ft_stack_len(*a) > pos)
		{
			ft_rra(a);
			pos++;
		}
	}
	ft_pb(a, b);
	ft_sort_3(a);
	ft_pa(b, a);
}
