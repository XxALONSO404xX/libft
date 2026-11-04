/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>          +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 08:32:35 by men-naim          #+#    #+#             */
/*   Updated: 2026/10/20 16:17:52 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	unsigned char		*p2;

	i = 0;
	p1 = (const unsigned char *) src;
	p2 = (unsigned char *) dest;
	while (i < n)
	{
		*(p2 + i) = *(p1 + i);
		i++;
	}
	return (dest);
}
