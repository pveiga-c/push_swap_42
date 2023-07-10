/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:34:59 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/10 16:11:00 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rot(t_stack **s)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*s || !(*s)->next)
		return ;
	last = *s;
	while (last->next->next)
		last = last->next;
	tmp = last->next;
	last->next = NULL;
	tmp->next = *s;
	*s = tmp;
}

void	ft_rra(t_stack **a)
{
	reverse_rot(a);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **b)
{
	reverse_rot(b);
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_stack **a, t_stack **b)
{
	reverse_rot(a);
	reverse_rot(b);
	write(1, "rrr\n", 4);
}
