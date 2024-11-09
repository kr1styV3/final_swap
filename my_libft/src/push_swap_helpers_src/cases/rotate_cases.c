/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_cases.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 00:45:13 by chrlomba          #+#    #+#             */
/*   Updated: 2024/06/28 00:49:00 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap_helper.h"

int	ft_case_rrarb_a(t_lis *a, t_lis *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(a, c))
		i = ft_int_lstsize(a) - ft_find_place_a(a, c);
	i = ft_find_index(b, c) + i;
	return (i);
}

int	ft_case_rarrb_a(t_lis *a, t_lis *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(b, c))
		i = ft_int_lstsize(b) - ft_find_index(b, c);
	i = ft_find_place_a(a, c) + i;
	return (i);
}

int	ft_case_rrarrb_a(t_lis *a, t_lis *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(a, c))
		i = ft_int_lstsize(a) - ft_find_place_a(a, c);
	if ((i < (ft_int_lstsize(b) - ft_find_index(b, c))) && ft_find_index(b, c))
		i = ft_int_lstsize(b) - ft_find_index(b, c);
	return (i);
}

int	ft_case_rarb_a(t_lis *a, t_lis *b, int c)
{
	int	i;

	i = ft_find_place_a(a, c);
	if (i < ft_find_index(b, c))
		i = ft_find_index(b, c);
	return (i);
}

int	ft_case_rarrb(t_lis *a, t_lis *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = ft_int_lstsize(b) - ft_find_place_b(b, c);
	i = ft_find_index(a, c) + i;
	return (i);
}
