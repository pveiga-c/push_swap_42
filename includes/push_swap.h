/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:41:54 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/06/29 18:56:22 by pveiga-c         ###   ########.fr       */
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
/* ----------------lists-----------------*/
/*---------------------------------------*/

typedef struct s_stack
{
	int				nbr;
	int				index;
	struct s_stack	*next;
}					t_stack;

/*---------------------------------------*/
/* ------------Libft---------------------*/
/*---------------------------------------*/

void				ft_putnbr(int n);
int					ft_isdigit(int c);
void				ft_putstr(char *s);
void				ft_putchar(char c);
int					ft_atoi(const char *nptr);
char				**ft_split(char const *s, char c);

/*---------------------------------------*/
/* ------------functions-----------------*/
/*---------------------------------------*/

void				ft_operations(void);
void				ft_fill_stack(char **argv, t_stack stack_a);

/*---------------------------------------*/
/* ----------------Error-----------------*/
/*---------------------------------------*/

void				ft_error(void);
int					ft_isnum(char *args);
void				ft_check_argv(int argc, char **argv);
int					ft_check_rep(long tmp, char **args, int i);

/*---------------------------------------*/
/* ----------------Stack's---------------*/
/*---------------------------------------*/

t_stack				*ft_stacknew(long nbr);
void				ft_fill_stack(t_stack **stack_a, t_stack *new_node);

#endif