/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <bsatou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:52:02 by bsatou            #+#    #+#             */
/*   Updated: 2019/09/10 20:56:18 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_list;

	new_list = (t_list*)malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	while (lst)
	{
		new_list = f(lst);
		lst->next;
		
	}
}
