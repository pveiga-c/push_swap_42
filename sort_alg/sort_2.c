/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:41:14 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/11 17:45:02 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_2(t_stack **a)
{
	if ((*a)->nbr > (*a)->next->nbr)
		ft_sa(a);
	return ;
}

void	ft_is_sort(t_stack *a)
{
	t_stack	*tmp;

	tmp = a;
	while (tmp->next != NULL)
	{
		if (tmp->nbr > tmp->next->nbr)
			return ;
		tmp = tmp->next;
	}
	exit(0);
}

void	ft_sort(t_stack **a, t_stack **b)
{
	ft_split_stack(a, b);
	ft_sort_5(a, b);
	while (ft_stack_len(*b) > 0)
		ft_sort_alg(a, b);
	ft_move_top_a(a, ft_find_pos(*a, ft_find_min(*a)));
}
