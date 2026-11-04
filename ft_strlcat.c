/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>          +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 08:36:25 by men-naim          #+#    #+#             */
/*   Updated: 2026/10/20 17:10:28 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	buffer_size(const char *str, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && *(str + i))
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	j;

	src_len = ft_strlen(src);
	dest_len = buffer_size(dest, size);
	if (dest_len >= size)
		return (src_len + size);
	j = 0;
	while ((dest_len + j < size - 1) && (*(src + j) != '\0'))
	{
		*(dest + (dest_len + j)) = *(src + j);
		j++;
	}
	*(dest + (dest_len + j)) = '\0';
	return (src_len + dest_len);
}
