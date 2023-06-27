/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:41:37 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/06/27 18:41:32 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_check_rep(long tmp, char **args, int i)
{
	i++;
	while (args[i])
	{
		if (tmp == ft_atoi(args[i]))
			return (1);
		i++;
	}
	return (0);
}

void	ft_check_argv(int argc, char **argv)
{
	int		i;
	char	**args;
	long	tmp;

	i = 0;
	if (argc == 2)
	{
		args = ft_split(argv[1], " ");
	}
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		temp = ft_atoi(args[i]);
		if (!ft_isdigit(args[i]))
			ft_error_digit();
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_error_size();
		if (ft_check_rep(tmp, args, i))
			ft_error_rep();
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	**stack_a;
	t_stack	**stack_b;

	stack_a = NULL;
	i = 0;
	if (argc < 2)
		return (-1);
	ft_check_argv(argc, argv);
	stack_a = (t_stack **)malloc(sizeof(t_stack));
	stack_b = (t_stack **)malloc(sizeof(t_stack));
	*stack_a = NULL;
	*stack_b = NULL;
	
}
