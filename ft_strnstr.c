/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 12:01:16 by bsatou            #+#    #+#             */
/*   Updated: 2019/09/09 17:34:20 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (needle[0] == '\0' || (!haystack && !needle) || \
			ft_strcmp(haystack, needle) == 0)
		return ((char*)haystack);
	if (haystack[0] == '\0')
		return (NULL);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (j + 1 == ft_strlen(needle) && j + 1 < len)
				return ((char*)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
