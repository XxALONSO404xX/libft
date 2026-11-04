/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:40:10 by men-naim          #+#    #+#             */
/*   Updated: 2026/10/22 12:17:33 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_a_separator(char const s, char c)
{
	return (s == c);
}

static int	word_counter(char const *s, char c)
{
	int	counter;

	counter = 0;
	while (*s)
	{
		while (is_a_separator(*s, c))
			s++;
		if (!is_a_separator(*s, c))
		{
			counter++;
			s++;
		}
		while (*s && !is_a_separator(*s, c))
			s++;
	}
	return (counter);
}

static char	*allocator(char const *s, char c, int *iterator)
{
	int	len;

	len = 0;
	while (*(s + len) && !is_a_separator(*(s + len), c))
		len++;
	*iterator = len;
	return (ft_substr(s, 0, len));
}

static void	*liberator(char **str, int i)
{
	while (i >= 0)
	{
		free(*(str + i));
		i--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		iterator;

	if (!s)
		return (NULL);
	i = 0;
	str = malloc((word_counter(s, c) + 1));
	if (!str)
		return (NULL);
	while (*s)
	{
		while (*s && is_a_separator(*s, c))
			s++;
		if (*s && !is_a_separator(*s, c))
		{
			*(str + i) = allocator(s, c, &iterator);
			if (!(*(str + i)))
				return (liberator(str, i - 1));
			s += iterator;
			i++;
		}
	}
	*(str + i) = NULL;
	return (str);
}
