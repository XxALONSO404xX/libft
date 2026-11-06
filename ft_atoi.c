/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:23:49 by men-naim          #+#    #+#             */
/*   Updated: 2026/11/05 20:39:42 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_spaceee(const char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

static int	is_sign(const char c)
{
	return (c == '-' || c == '+');
}

int	ft_atoi(const char *nptr)
{
	int		result;
	int		sign;
	int		i;

	i = 0;
	result = 0;
	sign = 1;
	while (is_spaceee(*(nptr + i)))
		i++;
	if (is_sign(*(nptr + i)))
	{
		if (*(nptr + i) == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(*(nptr + i)))
	{
		result = result * 10 + (*(nptr + i) - '0');
		i++;
	}
	return (result * sign);
}
