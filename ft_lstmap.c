/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:13:03 by men-naim          #+#    #+#             */
/*   Updated: 2026/10/29 17:13:40 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnodehead;
	t_list	*newlst;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	newnodehead = NULL;
	while (lst)
	{
		content = f(lst->content);
		newlst = ft_lstnew(content);
		if (!newlst)
		{
			del(content);
			ft_lstclear(&newnodehead, del);
			return (NULL);
		}
		ft_lstadd_back(&newnodehead, newlst);
		lst = lst->next;
	}
	return (newnodehead);
}
