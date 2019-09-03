/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 18:43:14 by bsatou            #+#    #+#             */
/*   Updated: 2019/09/03 18:43:16 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && ((unsigned char *)src)[i] != c)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	if (((unsigned char *)src)[i] == (unsigned char)c)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		return (dest + i + 1);
	}
	return (NULL);
}
