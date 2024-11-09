/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_lstnew.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:29:10 by chrlomba          #+#    #+#             */
/*   Updated: 2024/06/26 11:52:20 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap_helper.h"

t_lis	*ft_int_lstnew(int content)
{
	t_lis	*tmp;

	tmp = (t_lis *)malloc(sizeof(t_lis));
	if (!tmp)
		return (NULL);
	tmp->content = content;
	tmp->prev = NULL;
	tmp->next = NULL;
	return (tmp);
}
