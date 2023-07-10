/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:47:02 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/08 22:36:27 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_stack_len(t_stack *s)
{
	int	len;

	len = 0;
	while (s != NULL)
	{
		len++;
		s = s->next;
	}
	return (len);
}

int	ft_find_max(t_stack *s)
{
	int num_max;
	int pos;

	num_max = MIN;
	pos = 0;
	
	while(s != NULL)
	{
		if(s->nbr > num_max)
		{
			pos = s->index;
			num_max = s->nbr;
		}
		s = s->next;
					
	}
	return (pos);
}

int	ft_find_min(t_stack *s)
{
	int num_min;

	num_min = MAX;
	
	while(s != NULL)
	{
		if(s->nbr < num_min)
		{
			num_min = s->nbr;
		}
		s = s->next;
					
	}
	return (num_min);
}

float	ft_average(t_stack *s)
{
	int i;
	float avg;
	
	i = 0;
	avg = 0;
	while(s != NULL)
	{
		avg += s->nbr;
		i++;
		s = s->next;		
	}
	avg = avg / i;
	return (avg);
}

