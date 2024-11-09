/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_cases_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 00:49:05 by chrlomba          #+#    #+#             */
/*   Updated: 2024/06/28 00:50:52 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap_helper.h"

int	ft_case_rrarb(t_lis *a, t_lis *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(a, c))
		i = ft_int_lstsize(a) - ft_find_index(a, c);
	i = ft_find_place_b(b, c) + i;
	return (i);
}

int	ft_case_rrarrb(t_lis *a, t_lis *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = ft_int_lstsize(b) - ft_find_place_b(b, c);
	if ((i < (ft_int_lstsize(a) - ft_find_index(a, c))) && ft_find_index(a, c))
		i = ft_int_lstsize(a) - ft_find_index(a, c);
	return (i);
}

int	ft_case_rarb(t_lis *a, t_lis *b, int c)
{
	int	i;

	i = ft_find_place_b(b, c);
	if (i < ft_find_index(a, c))
		i = ft_find_index(a, c);
	return (i);
}
