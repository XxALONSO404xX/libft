/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:32:42 by men-naim          #+#    #+#             */
/*   Updated: 2026/10/21 10:31:57 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	int		start_idx;
	int		end_idx;
	char	*str;

	if (!s || !set)
		return (NULL);
	end_idx = ft_strlen(s) - 1;
	start_idx = 0;
	while (*(s + start_idx) && ft_strchr(set, *(s + start_idx)))
		start_idx++;
	while (end_idx > start_idx && ft_strchr(set, *(s + end_idx)))
		end_idx--;
	str = ft_substr(s, start_idx, (end_idx - start_idx) + 1);
	return (str);
}
