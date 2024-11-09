/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:45:13 by chrlomba          #+#    #+#             */
/*   Updated: 2024/06/28 16:05:04 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include <limits.h>

int	ft_small_check(t_lis **stack_a, t_lis **stack_b, int size)
{
	if (size <= 5)
	{
		if (size == 1)
			return (1);
		if (size == 2)
		{
			if ((*stack_a)->content > (*stack_a)->next->content)
				ft_sa(stack_a);
		}
		if (size == 3)
			ft_sort_three(stack_a);
		if (size == 4)
			ft_sort_four(stack_a, stack_b);
		if (size == 5)
		{
			ft_sort_five(stack_a, stack_b);
		}
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_lis		*stack_a;
	t_lis		*stack_b;
	int			size_a;

	if (ft_check_input(argc, argv) == 0)
		stack_a = arg_str_parsing(argv);
	else
		stack_a = arg_list_parsing(argc, argv);
	stack_b = NULL;
	size_a = ft_int_lstsize(stack_a);
	if (ft_small_check(&stack_a, &stack_b, size_a) == 1)
		return (ft_int_lstclear(stack_a));
	push_swap(&stack_a, &stack_b);
	ft_int_lstclear(stack_a);
	return (0);
}
