/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:47:02 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/03 16:45:02 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_fill_stack(char **argv, t_stack **stack_a)
{
	int		i;
	long	tmp;

	i = 1;
	while (argv)
	{
		tmp = ft_atoi(argv[i]);
		printf("%ld\n", tmp);
		if (i == 1)
			*stack_a = ft_stacknew(tmp);
		else
			ft_add_tail(stack_a, ft_stacknew(tmp));
	}
}
