/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <bsatou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:52:02 by bsatou            #+#    #+#             */
/*   Updated: 2019/09/16 22:03:39 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_lstdelcontent(void *content, size_t content_size)
{
	if (content != NULL)
	{
		free(content);
		content_size = 0;
	}
}


t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *start;
	t_list *list;

	if (!lst || !f)
		return (NULL);
	list = f(lst);
	if (!list)
		return (NULL);
	start = list;
	while (lst->next)
	{
		lst = lst->next;
		list->next = f(lst);
		if (!(list->next))
		{
			ft_lstdel(&start, &ft_lstdelcontent);
			return (NULL);
		}
		list = list->next;
	}
	return (start);
}
