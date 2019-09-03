/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:57:39 by bsatou            #+#    #+#             */
/*   Updated: 2019/09/03 18:34:37 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t i;
	size_t src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (src[i] != '\0' && i < dstsize)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (src_len);
}
