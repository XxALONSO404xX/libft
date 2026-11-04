/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 10:36:42 by men-naim          #+#    #+#             */
/*   Updated: 2026/10/23 10:36:52 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_counter(long n)
{
	int	digits;

	digits = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}

static char	*parser(long n, int sign, int digits)
{
	char	*ptr;
	int		i;

	ptr = malloc(digits + sign + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	if (sign == 1)
	{
		*ptr = '-';
		i++;
	}
	if (n == 0)
	{
		*ptr = '0';
		i++;
	}
	while (n > 0)
	{
		*(ptr + i) = n % 10 + '0';
		n /= 10;
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}

static void	swapper(char *ptr, int sign)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = ft_strlen(ptr) - 1;
	if (sign == 1)
		start = 1;
	while (start < end)
	{
		temp = *(ptr + start);
		*(ptr + start) = *(ptr + end);
		*(ptr + end) = temp;
		start++;
		end--;
	}
}

char	*ft_itoa(int n)
{
	long	number;
	int		sign;
	char	*ptr;
	int		digits;

	number = n;
	sign = 0;
	if (number < 0)
	{
		number = -number;
		sign = 1;
	}
	digits = digit_counter(number);
	ptr = parser(number, sign, digits);
	if (!ptr)
		return (NULL);
	swapper(ptr, sign);
	return (ptr);
}
