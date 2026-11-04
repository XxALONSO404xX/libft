/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>          +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 06:48:57 by men-naim          #+#    #+#             */
/*   Updated: 2026/10/14 09:06:16 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	s;

	s = (char) c;
	i = 0;
	while (1)
	{
		if (*(str + i) == s)
			return ((char *)(str + i));
		if (*(str + i) == '\0' && s != '\0')
			break ;
		i++;
	}
	return (NULL);
}
