/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_helper.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:30:48 by chrlomba          #+#    #+#             */
/*   Updated: 2024/06/28 14:32:10 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_HELPER_H
# define PUSH_SWAP_HELPER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct s_lis
{
	int					content;
	int					index;
	struct s_lis		*next;
	struct s_lis		*prev;
}	t_lis;

// cases

int			ft_case_rrarb_a(t_lis *a, t_lis *b, int c);
int			ft_case_rarrb_a(t_lis *a, t_lis *b, int c);
int			ft_case_rrarrb_a(t_lis *a, t_lis *b, int c);
int			ft_case_rarb_a(t_lis *a, t_lis *b, int c);
int			ft_case_rarrb(t_lis *a, t_lis *b, int c);
int			ft_case_rarb(t_lis *a, t_lis *b, int c);
int			ft_case_rrarrb(t_lis *a, t_lis *b, int c);
int			ft_case_rrarb(t_lis *a, t_lis *b, int c);
// best rotations

int			ft_rotate_type_ab(t_lis *a, t_lis *b);
int			ft_rotate_type_ba(t_lis *a, t_lis *b);

// apply rotations

int			ft_apply_rarb(t_lis **a, t_lis **b, int c, char s);
int			ft_apply_rrarrb(t_lis **a, t_lis **b, int c, char s);
int			ft_apply_rrarb(t_lis **a, t_lis **b, int c, char s);
int			ft_apply_rarrb(t_lis **a, t_lis **b, int c, char s);

// lst_functions
t_lis		*ft_int_lstnew(int content);
t_lis		*ft_int_lstlast(t_lis *lst);
int			ft_int_lstclear(t_lis *stack);
void		ft_int_lstadd_back(t_lis **lst, t_lis *new);
int			ft_int_lstsize(t_lis *lst);

// helper_functions
// load stack
t_lis		*load_stack(int *arr, int size);
// checks if stack is sorted
int			ft_checksorted(t_lis *stack_a);
//free split and other split functions
void		ft_free_split(char **split);
char		**split_and_validate(char *str, int *size);
int			*convert_split_to_array(char **split, int size);
// checks input
int			ft_check_input(int argc, char **argv);
// checks for duplicates in input
int			has_duplicates(int *arr, int size);
//find_indexes
int			ft_find_index(t_lis *a, int nbr);
int			ft_find_place_b(t_lis *stack_b, int nbr_push);
int			ft_find_place_a(t_lis *stack_a, int nbr_push);
// if input is valid
int			ft_is_valid_input(char *str);
// min  max
int			ft_max(t_lis *a);
int			ft_min(t_lis *a);
// moves
// swap
void		ft_swap(t_lis **stack);
void		ft_sa(t_lis **stack_a);
void		ft_sb(t_lis **stack_b);
void		ft_ss(t_lis **stack_a, t_lis **stack_b);
// push
void		ft_push(t_lis **from, t_lis **to);
void		ft_pa(t_lis **stack_a, t_lis **stack_b);
void		ft_pb(t_lis **stack_a, t_lis **stack_b);
// rotate
void		ft_rotate(t_lis **stack);
void		ft_ra(t_lis **stack_a);
void		ft_rb(t_lis **stack_b);
void		ft_rr(t_lis **stack_a, t_lis **stack_b);
// reverse_rotate
void		ft_reverse_rotate(t_lis **stack);
void		ft_rra(t_lis **stack_a);
void		ft_rrb(t_lis **stack_b);
void		ft_rrr(t_lis **stack_a, t_lis **stack_b);

#endif
