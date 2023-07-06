/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:52:15 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/06 19:02:09 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_is_sorted(t_stack *a, t_stack *b)
{
	while (a != NULL)
	{
		if (a->nbr < a->next->nbr)
			a = a->next;
		else
		{
			ft_sorted(a, b);
		}
	}
	if (a->next == NULL)
		write(1, "Ordenado\n", 9);
}

void    ft_sorted(t_stack *a, t_stack *b)
{
       
}