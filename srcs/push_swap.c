/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:41:37 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/06/28 19:12:28 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	char	**args;

	//t_stack	**stack_a;
	//t_stack	**stack_b;
	i = 0;
	if (argc < 2)
		return (-1);
	args = ft_check_argv(argc, argv);
	while (args[i])
	{
		printf("main =%s \n", args[i]);
		i++;
	}
	/*
	stack_a = (t_stack **)malloc(sizeof(t_stack));
	stack_b = (t_stack **)malloc(sizeof(t_stack));
	if (!stack_a || !stack_b)
		return (0);
	*stack_a = NULL;
	*stack_b = NULL;
	*/
}
