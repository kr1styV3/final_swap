/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 00:51:46 by chrlomba          #+#    #+#             */
/*   Updated: 2024/06/28 02:04:41 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap_helper.h"

int	ft_find_index(t_lis *a, int nbr)
{
	int		i;

	i = 0;
	while (a->content != nbr)
	{
		i++;
		a = a->next;
	}
	a->index = 0;
	return (i);
}

int	ft_find_place_b(t_lis *stack_b, int nbr_push)
{
	int		i;
	t_lis	*tmp;

	i = 1;
	if (nbr_push > stack_b->content && nbr_push
		< ft_int_lstlast(stack_b)->content)
		i = 0;
	else if (nbr_push > ft_max(stack_b) || nbr_push < ft_min(stack_b))
		i = ft_find_index(stack_b, ft_max(stack_b));
	else
	{
		tmp = stack_b->next;
		while (stack_b->content < nbr_push || tmp->content > nbr_push)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			i++;
		}
	}
	return (i);
}

int	ft_find_place_a(t_lis *stack_a, int nbr_push)
{
	int		i;
	t_lis	*tmp;

	i = 1;
	if (nbr_push < stack_a->content && nbr_push
		> ft_int_lstlast(stack_a)->content)
		i = 0;
	else if (nbr_push > ft_max(stack_a) || nbr_push < ft_min(stack_a))
		i = ft_find_index(stack_a, ft_min(stack_a));
	else
	{
		tmp = stack_a->next;
		while (stack_a->content > nbr_push || tmp->content < nbr_push)
		{
			stack_a = stack_a->next;
			tmp = stack_a->next;
			i++;
		}
	}
	return (i);
}

int	ft_checksorted(t_lis *stack_a)
{
	int	i;

	i = stack_a->content;
	while (stack_a)
	{
		if (i > stack_a->content)
			return (0);
		i = stack_a->content;
		stack_a = stack_a->next;
	}
	return (1);
}
