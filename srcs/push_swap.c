/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:41:37 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/06/06 17:13:42 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_check(char **stack_a)
{
	int	i;

	i = 0;
	if (stack_a[i])
	{
		ft_atoi(stack_a[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		n_words;
	char	**str;

	i = 0;
	stack_a = NULL;
	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		n_words = ft_len_word(argv[1], ' ');
		str = ft_split(argv[1], ' ');
		printf("Stack A\n");
		while (str[i])
		{
			ft_atoi(str[i]);
			printf("  %s\n", str[i]);
			i++;
		}
	}
	return (0);
}
