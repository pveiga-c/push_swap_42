/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:47:02 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/04 19:30:35 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	ft_fill_stack(int argc, char **argv)
{
	int		i;
	long	tmp;
	t_stack *stack;

	i = 1;
	while (argc > i)
	{
		tmp = ft_atoi(argv[i]);
		ft_add(&stack, ft_stacknew((int)tmp));
		i++;
	}
	return (*stack);
}
