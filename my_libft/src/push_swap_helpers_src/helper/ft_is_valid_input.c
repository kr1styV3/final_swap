/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_input.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:12:51 by chrlomba          #+#    #+#             */
/*   Updated: 2024/06/28 16:00:27 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap_helper.h"
#include "../headers/libft.h"
#include "../headers/ft_printf.h"
#include <limits.h>

int	ft_is_valid_input(char *str)
{
	long long	nbr;

	if (*str == '-')
		++str;
	if (!*str)
		return (0);
	if (str[0] == '\0')
		return (0);
	nbr = ft_atoll(str);
	if (nbr > INT_MAX)
		return (0);
	if (nbr < INT_MIN)
		return (0);
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		++str;
	}
	return (1);
}
