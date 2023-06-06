/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:41:37 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/06/06 20:33:50 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_convert_digit(char **str)
{
	int			i;
	static int	*stack_a;

	i = 0;
	while (str)
	{
		stack_a[i] = ft_atoi(str[i]);
		i++;
	}
	stack_a[i] = 0;
}

int	main(int argc, char **argv)
{
	int			i;
	int			n_words;
	char		**str;
	static int	*stack_a;

	i = 0;
	str = NULL;
	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		n_words = ft_len_word(argv[1], ' ');
		stack_a = malloc(sizeof(int) * (n_words + 1));
		if (!stack_a)
			return (0);
		str = ft_split(argv[1], ' ');
		stack_a = ft_convert_digit(str);
		printf("Stack_A string");
		while (str[i])
		{
			printf("\t%s\n", str[i]);
			i++;
		}
		i = 0;
		printf("Stack_A int");
		while (stack_a[i])
		{
			printf("\t%d\n", stack_a[i]);
			i++;
		}
	}
	return (0);
}
