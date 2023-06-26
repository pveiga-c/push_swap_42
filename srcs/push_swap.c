/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:41:37 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/06/26 17:15:35 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_check_argv(int argc, char **argv, t_stack **stack_a)
{
	int		i;
	int		j;
	char	**str;

	if (argc == 2)
	{
		while (argv[1] != '\0')
		{
			str[i] = ft_split(argv[1], " ");
			i++;
		}
	}
	else
	{
		while()
	}
}

int	main(int argc, char **argv)
{
	int		i;
	t_stack	*stack_a;

	stack_a = NULL;
	i = 0;
	str = NULL;
	if (argc < 2)
		return (0);
	else
	{
		ft_check_argv(argc, **argv, &stack_a);
	}
	return (0);
}
