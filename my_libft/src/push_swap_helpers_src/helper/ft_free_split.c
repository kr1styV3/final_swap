/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:10:32 by chrlomba          #+#    #+#             */
/*   Updated: 2024/06/28 15:58:30 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap_helper.h"
#include "../headers/libft.h"

void	ft_free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int	*convert_split_to_array(char **split, int size)
{
	int		*arr;
	int		i;

	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
	{
		ft_putstr_fd("Error\n", 2);
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		arr[i] = ft_atoi(split[i]);
		i++;
	}
	return (arr);
}

char	**split_and_validate(char *str, int *size)
{
	char		**split;
	int			i;

	split = ft_split(str, ' ');
	if (!split)
	{
		ft_putstr_fd("Error\n", 2);
		return (NULL);
	}
	i = 0;
	while (split[i])
	{
		if (ft_is_valid_input(split[i]) == 0)
		{
			ft_putstr_fd("Error\n", 2);
			ft_free_split(split);
			return (NULL);
		}
		i++;
	}
	*size = i;
	return (split);
}
