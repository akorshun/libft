/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 11:53:15 by bsatou            #+#    #+#             */
/*   Updated: 2019/07/10 12:17:56 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *src)
{
	int		src_len;
	int		i;
	char	*dest;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	dest = (char*)malloc(sizeof(*dest) * (src_len + 1));
	i = 0;
	while (i < src_len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
