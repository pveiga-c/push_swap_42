/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:56:56 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/06/28 19:10:06 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(void)
{
	ft_putstr("Error\n");
	exit(0);
}

int	ft_isnum(char *args)
{
	int	i;

	i = 0;
	if (args[0] == '-' || args[0] == '+')
		i++;
	while (args[i])
	{
		if (!ft_isdigit(args[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_rep(long tmp, char **args, int i)
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

char	**ft_check_argv(int argc, char **argv)
{
	int		i;
	char	**args;
	long	tmp;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		tmp = ft_atoi(args[i]);
		printf("%ld\n", tmp);
		if (!ft_isnum(args[i]))
			ft_error();
		if (ft_check_rep(tmp, args, i))
			ft_error();
		i++;
	}
	return (args);
}
