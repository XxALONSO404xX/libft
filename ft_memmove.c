/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>          +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 08:34:37 by men-naim          #+#    #+#             */
/*   Updated: 2026/10/20 16:43:26 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p1;
	const unsigned char	*p2;

	p1 = (unsigned char *) dest;
	p2 = (const unsigned char *) src;
	if (p1 > p2)
	{
		while (n-- > 0)
			*(p1 + n) = *(p2 + n);
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
