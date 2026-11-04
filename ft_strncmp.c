/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>          +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:06:24 by men-naim          #+#    #+#             */
/*   Updated: 2026/10/20 17:17:44 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && *(s1 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
