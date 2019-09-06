/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:44:40 by bsatou            #+#    #+#             */
/*   Updated: 2019/09/06 20:40:15 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t dest_len;
	size_t i;

	dest_len = 0;
	i = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[i] && i < dstsize)
	{
		if (dest_len + i < dstsize - 1)
			dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dstsize + i);
}
