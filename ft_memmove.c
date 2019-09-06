/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 19:11:45 by bsatou            #+#    #+#             */
/*   Updated: 2019/09/06 19:24:28 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char temp[n];

	if (!dest && !src)
		return (NULL);
	if (n < 128 * 1024 * 1024)
	{
		ft_memcpy(temp, src, n);
		ft_memcpy(dest, temp, n);
	}
	else
		return (0);
	return (dest);
}
