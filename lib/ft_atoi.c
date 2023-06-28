/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:26:25 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/06/28 19:01:59 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
A função atoi em C é usada para converter uma string que 
representa um número inteiro em um valor inteiro 
correspondente. A string deve conter apenas dígitos e, 
opcionalmente, um sinal de mais ou menos no início.
O tipo de retorno da função é o valor inteiro correspondente 
à string. 
*/

#include "../includes/push_swap.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	long	num;
	int		signal;

	i = 0;
	num = 0;
	signal = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		signal = -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		num = num * 10;
		num = num + nptr[i] - '0';
		i++;
	}
	if (num < -2147483648 || num > 2147483647)
		ft_error();
	return (num * signal);
}
