/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:48:25 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/08 17:28:39 by pveiga-c         ###   ########.fr       */
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
	//printf("\nStack A\n");
	//print_list(a);
	ft_sort_stack(&a, &b);
	//printf("\nStack A\n");
	print_list(a);
	//printf("\nStack b\n");
	//print_list(b);
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
		printf("  %d\n", temp->nbr);
		temp = temp->next;
	}
	printf("-------\n");
}
