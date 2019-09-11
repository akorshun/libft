/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <bsatou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:52:02 by bsatou            #+#    #+#             */
/*   Updated: 2019/09/11 14:00:49 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_list;
	t_list *buf;
	t_list *start;

	if (!lst || !f)
		return (NULL);
	new_list = (t_list*)malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	buf = f(lst);
	new_list = ft_lstnew(buf->content, buf->content_size);
	if (!new_list)
		return (NULL);
	start = new_list;
	lst = lst->next;
	while (lst)
	{
		buf = f(lst);
		if (ft_lstnew(buf->content, buf->content_size))
		{
			new_list = ft_lstnew(buf->content, buf->content_size);
			new_list = new_list->next;
		}
		lst = lst->next;
	}
	return (start);
}
