/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_rotations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 00:57:21 by chrlomba          #+#    #+#             */
/*   Updated: 2024/06/28 01:00:40 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap_helper.h"

int	ft_apply_rarb(t_lis **a, t_lis **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->content != c && ft_find_place_b(*b, c) > 0)
			ft_rr(a, b);
		while ((*a)->content != c)
			ft_ra(a);
		while (ft_find_place_b(*b, c) > 0)
			ft_rb(b);
		ft_pb(a, b);
	}
	else
	{
		while ((*b)->content != c && ft_find_place_a(*a, c) > 0)
			ft_rr(a, b);
		while ((*b)->content != c)
			ft_rb(b);
		while (ft_find_place_a(*a, c) > 0)
			ft_ra(a);
		ft_pa(a, b);
	}
	return (-1);
}

int	ft_apply_rrarrb(t_lis **a, t_lis **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->content != c && ft_find_place_b(*b, c) > 0)
			ft_rrr(a, b);
		while ((*a)->content != c)
			ft_rra(a);
		while (ft_find_place_b(*b, c) > 0)
			ft_rrb(b);
		ft_pb(a, b);
	}
	else
	{
		while ((*b)->content != c && ft_find_place_a(*a, c) > 0)
			ft_rrr(a, b);
		while ((*b)->content != c)
			ft_rrb(b);
		while (ft_find_place_a(*a, c) > 0)
			ft_rra(a);
		ft_pa(a, b);
	}
	return (-1);
}

int	ft_apply_rrarb(t_lis **a, t_lis **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->content != c)
			ft_rra(a);
		while (ft_find_place_b(*b, c) > 0)
			ft_rb(b);
		ft_pb(a, b);
	}
	else
	{
		while (ft_find_place_a(*a, c) > 0)
			ft_rra(a);
		while ((*b)->content != c)
			ft_rb(b);
		ft_pa(a, b);
	}
	return (-1);
}

int	ft_apply_rarrb(t_lis **a, t_lis **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->content != c)
			ft_ra(a);
		while (ft_find_place_b(*b, c) > 0)
			ft_rrb(b);
		ft_pb(a, b);
	}
	else
	{
		while (ft_find_place_a(*a, c) > 0)
			ft_ra(a);
		while ((*b)->content != c)
			ft_rrb(b);
		ft_pa(a, b);
	}
	return (-1);
}
