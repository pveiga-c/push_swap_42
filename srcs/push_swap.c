/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:48:25 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/06 18:57:29 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	t_stack	*b;
	ft_check_argv(argc, argv);
	a = ft_fill_stack(argc, argv);
	b = NULL;
	print_list(a);
	ft_is_sorted(a, b);
	//printf("len = %d\n", ft_stack_len(a));
	//printf("pos max = %d\n", ft_find_max(a));
	//printf("pos min = %d\n", ft_find_min(a));
	//printf("media = %.2f\n", ft_average(a));
	ft_free_stack(a);
}

void	print_list(t_stack *s)
{
	t_stack	*temp;

	temp = s;
	printf("\n-------\n");
	while (temp != 0)
	{
		printf("%d -> %d\n", temp->index, temp->nbr);
		temp = temp->next;
	}
	printf("-------\n");
}
