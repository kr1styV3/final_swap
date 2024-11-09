/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:46:17 by chrlomba          #+#    #+#             */
/*   Updated: 2024/06/28 16:05:13 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../my_libft/headers/libft.h"
# include "../my_libft/headers/ft_printf.h"
# include "../my_libft/headers/push_swap_helper.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_structs
{
	t_lis	*stack_a;
	t_lis	*final_a;
	t_lis	*stack_b;
	t_lis	*final_b;
	int		a_len;
	int		b_len;
	t_lis	*a_min;
}	t_structs;

t_lis		*arg_list_parsing(int argc, char **argv);
t_lis		*arg_str_parsing(char **argv);

int			main(int argc, char **argv);

// Helper Functions
int			ft_check_input(int argc, char **argv);
int			ft_small_check(t_lis **stack_a, t_lis **stack_b, int size);
void		ft_sort_three(t_lis **stack_a);
void		ft_sort_four(t_lis **stack_a, t_lis **stack_b);
void		ft_sort_five(t_lis **stack_a, t_lis **stack_b);
void		push_smallest_to_b(t_lis **stack_a);
void		push_swap(t_lis **stack_a, t_lis **stack_b);
t_lis		**ft_sort_a(t_lis **stack_a, t_lis **stack_b);
t_lis		*ft_sort_b(t_lis **stack_a);
void		ft_sort_b_till_3(t_lis **stack_a, t_lis **stack_b);
int			*parse_args(int argc, char **argv, int *size);
int			*parse_str(char *str, int *size);
void		push_smallest_to_b_4(t_lis **stack_a);

#endif
