/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:41:54 by pveiga-c          #+#    #+#             */
/*   Updated: 2023/07/11 16:28:47 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//------------Include-------------------//

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

//------------------define--------------------//

# define MAX 2147483647
# define MIN -2147483648

//--------------------lists-------------------//

typedef struct s_stack
{
	int				nbr;
	int				index;
	int				bff;
	int				cost;
	struct s_stack	*next;
}					t_stack;

//------------------Libft---------------------//

void				ft_putnbr(int n);
int					ft_isdigit(int c);
void				ft_putstr(char *s);
void				ft_putchar(char c);
int					ft_atoi(const char *nptr);
char				**ft_split(char const *s, char c);

//----------------functions--------------------//

void				ft_operations(void);
void				print_list(t_stack *a);

//-------------------Error--------------------//

void				ft_error(void);
int					ft_isnum(char *args);
void				ft_check_argv(int argc, char **argv);
int					ft_check_rep(long tmp, char **args, int i);

//-------------------Stack's------------------//

t_stack				*ft_stacknew(long nbr, int index);
t_stack				*find_tail(t_stack *a);
void				ft_free_stack(t_stack *s);
t_stack				*ft_fill_stack(int argc, char **argv);
void				ft_add(t_stack **a, t_stack *new_node);

//---------------------swap---------------------//

void				ft_swap(t_stack **s);
void				ft_sa(t_stack **a);
void				ft_sb(t_stack **b);
void				ft_ss(t_stack **a, t_stack **b);

//---------------------push---------------------//

void				push(t_stack **src, t_stack **dst);
void				ft_pa(t_stack **a, t_stack **b);
void				ft_pb(t_stack **a, t_stack **b);

//---------------------rotate-------------------//

void				rotate(t_stack **s);
void				ft_ra(t_stack **a);
void				ft_rb(t_stack **b);
void				ft_rr(t_stack **a, t_stack **b);

//-----------------reverse_rotate---------------//

void				reverse_rot(t_stack **s);
void				ft_rra(t_stack **a);
void				ft_rrb(t_stack **b);
void				ft_rrr(t_stack **a, t_stack **b);

//----------------------srcs--------------------//

int					ft_stack_len(t_stack *s);
int					ft_find_max(t_stack *s);
int					ft_find_min(t_stack *s);
float				ft_average(t_stack *s);

//----------------------push--------------------//

void				ft_sort_stack(t_stack **a, t_stack **b);
void				ft_sort_2(t_stack **a);
void				ft_sort_3(t_stack **s);
void				ft_sort(t_stack **a, t_stack **b);
void				ft_sort_alg(t_stack **a, t_stack **b);
int					ft_find_bf(t_stack *a, int nbr);
void				ft_split_stack(t_stack **a, t_stack **b);
int					ft_find_cost(t_stack **a, t_stack **b, int nbr, int bff);
int					ft_find_pos(t_stack *s, int n);
void				ft_move_top_a(t_stack **a, int index);
void				ft_move_top_b(t_stack **b, int index);
void				ft_sort_5(t_stack **a, t_stack **b);
void				ft_sort_4(t_stack **a, t_stack **b);
int					ft_find_min_4(t_stack *s);
int					ft_find_min_5(t_stack *s);
void				ft_is_sort(t_stack *a);

#endif