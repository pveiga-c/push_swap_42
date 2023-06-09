/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:48:25 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/13 15:42:03 by pveiga-c         ###   ########.fr       */
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
	ft_is_sort(a);
	ft_sort_stack(&a, &b);
	ft_free_stack(a);
	return (0);
}

void	print_list(t_stack *s)
{
	t_stack	*temp;

	temp = s;
	printf("\n-------\n");
	while (temp != 0)
	{
		printf("  %d\n", temp->nbr);
		temp = temp->next;
	}
	printf("-------\n");
}
