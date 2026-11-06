/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>          +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 06:48:57 by men-naim          #+#    #+#             */
/*   Updated: 2026/11/05 21:03:38 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if ((unsigned char)*str++ == (unsigned char)c)
			return ((char *)(--str));
	}
	if ((unsigned char)c == '\0')
		return ((char *)str);
	return (NULL);
}
