/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:48:25 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/05 17:30:25 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

	//t_stack	*stack_b;
	ft_check_argv(argc, argv);
	stack_a = ft_fill_stack(argc, argv);
	print_list(stack_a);
	ft_free_stack(stack_a);
}

int	get_content(t_stack *elem)
{
	return (elem->nbr);
}

void	print_list(t_stack *a)
{
	t_stack	*temp_a;

	temp_a = a;
	while (temp_a != 0)
	{
		printf("%d\n", get_content(temp_a));
		temp_a = temp_a->next;
	}
}
