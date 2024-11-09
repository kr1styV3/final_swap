/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:48:52 by chrlomba          #+#    #+#             */
/*   Updated: 2024/06/28 15:35:55 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	*parse_args(int argc, char **argv, int *size)
{
	int		*arr;
	int		i;

	arr = (int *)malloc(sizeof(int) * (argc - 1));
	if (!arr)
	{
		ft_putstr_fd("Error\n", 2);
		return (NULL);
	}
	i = 1;
	while (i < argc)
	{
		if (ft_is_valid_input(argv[i]) == 0)
		{
			ft_putstr_fd("Error\n", 2);
			free(arr);
			exit (0);
		}
		arr[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	*size = argc - 1;
	return (arr);
}

t_lis	*arg_list_parsing(int argc, char **argv)
{
	int		*arr;
	int		size;
	t_lis	*stack;

	arr = parse_args(argc, argv, &size);
	if (!arr)
		return (NULL);
	if (has_duplicates(arr, size))
	{
		ft_putstr_fd("Error\n", 2);
		free(arr);
		exit (0);
	}
	stack = load_stack(arr, size);
	free(arr);
	return (stack);
}

int	*parse_str(char *str, int *size)
{
	char	**split;
	int		*arr;

	split = split_and_validate(str, size);
	if (!split)
		return (NULL);
	arr = convert_split_to_array(split, *size);
	ft_free_split(split);
	if (!arr)
		return (NULL);
	return (arr);
}

t_lis	*arg_str_parsing(char **argv)
{
	int		*arr;
	int		size;
	t_lis	*stack;

	arr = parse_str(argv[1], &size);
	if (!arr)
		return (NULL);
	if (has_duplicates(arr, size))
	{
		ft_putstr_fd("Error\n", 2);
		free(arr);
		exit(0);
	}
	stack = load_stack(arr, size);
	free(arr);
	return (stack);
}
