/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 02:35:44 by chrlomba          #+#    #+#             */
/*   Updated: 2024/06/28 15:58:45 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap_helper.h"
#include "../headers/libft.h"

t_lis	*load_stack(int *arr, int size)
{
	t_lis	*stack;
	t_lis	*new_node;
	int		i;

	i = 0;
	stack = NULL;
	while (i < size)
	{
		new_node = ft_int_lstnew(arr[i]);
		if (!new_node)
		{
			ft_putstr_fd("Error\n", 2);
			ft_int_lstclear(stack);
			return (NULL);
		}
		ft_int_lstadd_back(&stack, new_node);
		i++;
	}
	return (stack);
}
