/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:54:12 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/07 17:34:18 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap(t_stack **s)
{
	int	tmp;

	tmp = (*s)->nbr;
	(*s)->nbr = (*s)->next->nbr;
	(*s)->next->nbr = tmp;
}

void	ft_sa(t_stack **a)
{
	ft_swap(a);
	write(1, "sa\n", 3);
}

void	ft_sb(t_stack **b)
{
	ft_swap(b);
	write(1, "sb\n", 3);
}

void	ft_ss(t_stack **a, t_stack **b)
{
	ft_swap(a);
	ft_swap(b);
	write(1, "ss\n", 3);
}