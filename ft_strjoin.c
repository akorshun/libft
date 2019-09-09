/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:07:17 by bsatou            #+#    #+#             */
/*   Updated: 2019/09/09 20:23:07 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*strjoined;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	strjoined = (char*)malloc(sizeof(char) * \
				(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!strjoined)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		strjoined[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		strjoined[j + i] = s2[j];
		j++;
	}
	strjoined[i + j] = '\0';
	return (strjoined);
}
