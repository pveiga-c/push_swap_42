/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:40:27 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/11 17:40:57 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
	else if (f < s && f < t && s > t)
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
