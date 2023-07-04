/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:41:54 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/04 19:34:28 by correia          ###   ########.fr       */
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
t_stack				ft_fill_stack(int argc, char **argv);
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
t_stack				*find_tail(t_stack *stack_a);
void				ft_add(t_stack **stack_a, t_stack *new_node);

//int					get_content(t_stack *elem);
//void				print_list(t_stack *a);

#endif