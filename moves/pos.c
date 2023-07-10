/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:16:33 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/10 15:59:42 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
calcular o numero de movimentos minimos para colocar os numeros
 das stack no topo 
*/
int	ft_find_cost(t_stack **a, t_stack **b, int nbr, int bff)
{
	int	cost;

	cost = 0;
	if (ft_find_pos(*b, nbr) <= ft_stack_len(*b) / 2)
		cost += ft_find_pos(*b, nbr);
	else if (ft_find_pos(*b, nbr) > ft_stack_len(*b) / 2)
		cost = +ft_stack_len(*b) - ft_find_pos(*b, nbr);
	if (ft_find_pos(*a, bff) <= ft_stack_len(*a) / 2)
		cost += ft_find_pos(*a, bff);
	else if (ft_find_pos(*a, bff) > ft_stack_len(*a) / 2)
		cost = +ft_stack_len(*a) - ft_find_pos(*a, bff);
	return (cost);
}

int	ft_find_pos(t_stack *s, int n)
{
	int	i;

	i = 0;
	while (s != NULL)
	{
		if (s->nbr == n)
			return (i);
		i++;
		s = s->next;
	}
	return (0);
}

void	ft_move_top_a(t_stack **a, int index)
{
	int	i;

	i = 0;
	if (index <= (ft_stack_len(*a) / 2))
	{
		while (i < index)
		{
			ft_ra(a);
			i++;
		}
	}
	else
	{
		while (i < (ft_stack_len(*a) - index))
		{
			ft_rra(a);
			i++;
		}
	}
}

void	ft_move_top_b(t_stack **b, int index)
{
	int	i;

	i = 0;
	if (index <=(ft_stack_len(*b) / 2))
	{
		while (i < index)
		{
			ft_rb(b);
			i++;
		}
	}
	else
	{
		while (i < (ft_stack_len(*b) - index))
		{
			ft_rrb(b);
			i++;
		}
	}
}
