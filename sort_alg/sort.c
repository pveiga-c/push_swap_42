/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:52:15 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/10 20:01:06 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_stack(t_stack **a, t_stack **b)
{
	if (ft_stack_len(*a) == 5)
		ft_sort_5(a, b);
	else if (ft_stack_len(*a) == 4)
		ft_sort_4(a, b);
	else if (ft_stack_len(*a) == 3)
		ft_sort_3(a);
	else
		ft_sort(a, b);
}

void	ft_sort_2(t_stack **a)
{
	if ((*a)->nbr > (*a)->next->nbr)
		ft_sa(a);
	return ;
}

void	ft_sort_3(t_stack **a)
{
	int	f;
	int	s;
	int	t;

	f = (*a)->nbr;
	s = (*a)->next->nbr;
	t = (*a)->next->next->nbr;
	if (f > s && f < t)
		ft_sa(a);
	else if (f < s && f < t)
	{
		ft_rra(a);
		ft_sa(a);
	}
	else if (f > s && f > t && s < t)
		ft_ra(a);
	else if (f > s && f > t && s > t)
	{
		ft_sa(a);
		ft_rra(a);
	}
	else if (f < s && f > t)
		ft_rra(a);
	return ;
}

void	ft_sort(t_stack **a, t_stack **b)
{
	ft_split_stack(a, b);
	while (ft_stack_len(*b) > 0)
		ft_sort_alg(a, b);
	ft_move_top_a(a, ft_find_pos(*a, ft_find_min(*a)));
}

void	ft_sort_alg(t_stack **a, t_stack **b)
{
	t_stack	*tmp_b;
	int		cost;
	int		index_a;
	int		index_b;

	tmp_b = *b;
	cost = MAX;
	index_a = 0;
	index_b = 0;
	while (tmp_b != NULL)
	{
		tmp_b->bff = ft_find_bf(*a, tmp_b->nbr);
		if (ft_find_cost(a, b, tmp_b->nbr, tmp_b->bff) < cost)
		{
			cost = ft_find_cost(a, b, tmp_b->nbr, tmp_b->bff);
			index_a = ft_find_pos(*a, tmp_b->bff);
			index_b = ft_find_pos(*b, tmp_b->nbr);
		}
		tmp_b = tmp_b->next;
	}
	ft_move_top_a(a, index_a);
	ft_move_top_b(b, index_b);
	ft_pa(b, a);
}


int	ft_find_bf(t_stack *a, int nbr)
{
	int	bf;
	int	temp;
	int	bff;

	bf = MAX;
	while (a != NULL)
	{
		temp = a->nbr - nbr;
		if (temp > 0 && temp < bf)
		{
			bf = temp;
			bff = a->nbr;
		}
		a = a->next;
	}
	return (bff);
}

void	ft_split_stack(t_stack **a, t_stack **b)
{
	while (ft_stack_len(*a) > 3)
	{
		if ((*a)->nbr < ft_average(*a))
			ft_pb(a, b);
		else
			ft_ra(a);
	}
	ft_sort_3(a);
}
