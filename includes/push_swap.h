/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:41:54 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/06/06 20:32:21 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*---------------------------------------*/
/* ------------Include-------------------*/
/*---------------------------------------*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

/*---------------------------------------*/
/* ------------functions-----------------*/
/*---------------------------------------*/

void	ft_operations(void);
char	*ft_strncpy(char *dst, const char *src, size_t n);
int		ft_len_word(char *s, char c);
char	*ft_strndup(const char *s, size_t n);
char	**ft_split(char const *s, char c);
int		ft_isdigit(int c);
int		ft_atoi(const char *nptr);
void	ft_convert_digit(char **str);

#endif