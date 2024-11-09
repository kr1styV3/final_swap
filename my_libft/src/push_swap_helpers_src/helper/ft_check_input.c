/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:11:49 by chrlomba          #+#    #+#             */
/*   Updated: 2024/06/28 16:03:15 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap_helper.h"
#include "../headers/libft.h"

int	ft_check_input(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_strlen(argv[1]) == 0)
		{
			ft_putstr_fd("Error\n", 2);
			exit (0);
		}
		if (ft_is_valid_input(argv[1]) == 0)
			return (0);
	}
	return (1);
}

int	has_duplicates(int *arr, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
