/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:41:51 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/10 16:11:04 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate(t_stack **s)
{
	t_stack	*tmp;
	t_stack	*lst;

	if (!*s || !(*s)->next)
		return ;
	tmp = *s;
	*s = (*s)->next;
	lst = *s;
	while (lst->next)
		lst = lst->next;
	lst->next = tmp;
	tmp->next = NULL;
}

void	ft_ra(t_stack **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	ft_rb(t_stack **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	ft_rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
