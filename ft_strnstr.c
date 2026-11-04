/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:14:40 by men-naim          #+#    #+#             */
/*   Updated: 2026/10/15 09:14:42 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	s2_len;

	s2_len = ft_strlen(s2);
	if (s2_len == 0)
		return ((char *) s1);
	while (len && *s1)
	{
		if (s2_len > len)
			return (NULL);
		if (ft_strncmp(s1++, s2, s2_len) == 0)
			return ((char *)--s1);
		len--;
	}
	return (NULL);
}
