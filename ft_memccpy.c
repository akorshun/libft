/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 18:43:14 by bsatou            #+#    #+#             */
/*   Updated: 2019/09/06 18:43:27 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest2;
	unsigned char	*src2;

	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	i = 0;
	while (i < n && src2[i] != c)
	{
		dest2[i] = src2[i];
		i++;
	}
	if (src2[i] == c)
	{
		dest2[i] = src2[i];
		return (dest2 + i + 1);
	}
	return (NULL);
}
