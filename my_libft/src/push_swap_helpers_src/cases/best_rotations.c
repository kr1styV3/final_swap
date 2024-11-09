/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_rotations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 00:54:29 by chrlomba          #+#    #+#             */
/*   Updated: 2024/06/28 00:55:55 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap_helper.h"

int	ft_rotate_type_ba(t_lis *a, t_lis *b)
{
	int		i;
	t_lis	*tmp;

	tmp = b;
	i = ft_case_rrarrb_a(a, b, b->content);
	while (tmp)
	{
		if (i > ft_case_rarb_a(a, b, tmp->content))
			i = ft_case_rarb_a(a, b, tmp->content);
		if (i > ft_case_rrarrb_a(a, b, tmp->content))
			i = ft_case_rrarrb_a(a, b, tmp->content);
		if (i > ft_case_rarrb_a(a, b, tmp->content))
			i = ft_case_rarrb_a(a, b, tmp->content);
		if (i > ft_case_rrarb_a(a, b, tmp->content))
			i = ft_case_rrarb_a(a, b, tmp->content);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_ab(t_lis *a, t_lis *b)
{
	int		i;
	t_lis	*tmp;

	tmp = a;
	i = ft_case_rrarrb(a, b, a->content);
	while (tmp)
	{
		if (i > ft_case_rarb(a, b, tmp->content))
			i = ft_case_rarb(a, b, tmp->content);
		if (i > ft_case_rrarrb(a, b, tmp->content))
			i = ft_case_rrarrb(a, b, tmp->content);
		if (i > ft_case_rarrb(a, b, tmp->content))
			i = ft_case_rarrb(a, b, tmp->content);
		if (i > ft_case_rrarb(a, b, tmp->content))
			i = ft_case_rrarb(a, b, tmp->content);
		tmp = tmp->next;
	}
	return (i);
}
