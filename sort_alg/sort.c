/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:52:15 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/07 19:01:41 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_is_sort(t_stack **a, t_stack **b)
{
    if(ft_stack_len(*a) == 2)
        ft_sort_2(a);
	else if(ft_stack_len(*a) == 3)
        ft_sort_3(a);
    else
        ft_sort(a, b);
        
}

void    ft_sort_2(t_stack **a)
{
    if ((*a)->nbr > (*a)->next->nbr)
        ft_sa(a);
    return ;
}

void    ft_sort_3(t_stack **a)
{
        int f;
        int s;
        int t;
        
        f = (*a)->nbr;
        s = (*a)->next->nbr;
        t = (*a)->next->next->nbr;
        if(f > s && f < t)
            ft_sa(a);
        else if(f < s && f < t)
        {
            ft_rra(a);
            ft_sa(a);
        }
        else if(f > s && f > t && s < t)
            ft_ra(a);
        else if(f > s && f > t && s > t)
        {
            ft_ra(a);
            ft_ra(a);  
        }
        else if(f < s && f > t)
            ft_rra(a); 
        return ;   
}
// dividir a stack A em 2 e passar para a stack B os valores abaixo da media dos mesmos.
void    ft_sort(t_stack **a, t_stack **b)
{
    int m;
    int bf;

    m = ft_stack_len(*a) / 2;
    while(ft_stack_len(*a) > m)
    {
        if((*a)->nbr < ft_average(*a))
            ft_pb(a, b);
        else
            ft_ra(a);    
    }
    bf = ft_find_bf(*a, 6);
    printf("bf = %d\n", bf);
    /*
    while(ft_stack_len(*b) > 0)
        ft_sort_alg(a, b);
        */
}
void    ft_sort_alg(t_stack **a, t_stack **b)
{
    ft_find_bf(*a, (*b)->nbr);
}

int    ft_find_bf(t_stack *a, int nbr)
{
    int bf;
    int temp;
    int bff;
    
    bf = MAX;
     while(a != NULL)
    {
        temp = a->nbr - nbr;
        if(temp > 0 && temp < bf)
        {
            bf = temp;
            bff = a->nbr;
        }
        a = a->next;    
    }
    return (bff);
}

