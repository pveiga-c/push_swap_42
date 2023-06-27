/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:56:56 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/06/27 17:22:34 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_error_digit(void)
{
	ft_putstr("Error\n");
	ft_putstr("Invalid characters\n");
	exit(0);
}

void	ft_error_size(void)
{
	ft_putstr("Error\n");
	ft_putstr("Numbers outside the allowed limit\n");
	exit(0);
}

void	ft_error_rep(void)
{
	ft_putstr("Error\n");
	ft_putstr("Duplicate characters\n");
	exit(0);
}
