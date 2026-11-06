/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>          +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 08:56:56 by men-naim          #+#    #+#             */
/*   Updated: 2026/10/14 10:25:19 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if ((unsigned char)*(str + len) == (unsigned char)c)
			return ((char *)(str + len));
		len--;
	}
	return (NULL);
}
