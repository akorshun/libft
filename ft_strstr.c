/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 12:01:16 by bsatou            #+#    #+#             */
/*   Updated: 2019/09/03 18:35:40 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;
	size_t needle_len;

	i = 0;
	j = 0;
	needle_len = 0;
	if (haystack[0] == '\0')
		return (0);
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (needle[needle_len] != '\0')
		needle_len++;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (j + 1 == needle_len)
				return ((char*)(haystack + i));
			j++;
		}
		i++;
	}
	return (0);
}
