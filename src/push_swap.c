/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 23:59:38 by chrlomba          #+#    #+#             */
/*   Updated: 2024/06/28 02:03:58 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include <limits.h>

void	ft_sort_b_till_3(t_lis **stack_a, t_lis **stack_b)
{
	int		i;
	t_lis	*tmp;

	while (ft_int_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
	{
		tmp = *stack_a;
		i = ft_rotate_type_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rarb(stack_a, stack_b, tmp->content, 'a');
			else if (i == ft_case_rrarrb(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->content, 'a');
			else if (i == ft_case_rarrb(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->content, 'a');
			else if (i == ft_case_rrarb(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->content, 'a');
			else
				tmp = tmp->next;
		}
	}
}

t_lis	*ft_sort_b(t_lis **stack_a)
{
	t_lis	*stack_b;

	stack_b = NULL;
	if (ft_int_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
		ft_pb(stack_a, &stack_b);
	if (ft_int_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
		ft_pb(stack_a, &stack_b);
	if (ft_int_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
		ft_sort_b_till_3(stack_a, &stack_b);
	if (!ft_checksorted(*stack_a))
		ft_sort_three(stack_a);
	return (stack_b);
}

t_lis	**ft_sort_a(t_lis **stack_a, t_lis **stack_b)
{
	int		i;
	t_lis	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = ft_rotate_type_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rarb(stack_a, stack_b, tmp->content, 'b');
			else if (i == ft_case_rarrb_a(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->content, 'b');
			else if (i == ft_case_rrarrb_a(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->content, 'b');
			else if (i == ft_case_rrarb_a(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->content, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (stack_a);
}

void	push_swap(t_lis **stack_a, t_lis **stack_b)
{
	int		i;

	if (ft_int_lstsize(*stack_a) == 2)
		ft_sa(stack_a);
	else
	{
		*stack_b = ft_sort_b(stack_a);
		stack_a = ft_sort_a(stack_a, stack_b);
		i = ft_find_index(*stack_a, ft_min(*stack_a));
		if (i < ft_int_lstsize(*stack_a) - i)
		{
			while ((*stack_a)->content != ft_min(*stack_a))
				ft_ra(stack_a);
		}
		else
		{
			while ((*stack_a)->content != ft_min(*stack_a))
				ft_rra(stack_a);
		}
	}
}
