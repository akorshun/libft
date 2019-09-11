/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <bsatou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:06:53 by bsatou            #+#    #+#             */
/*   Updated: 2019/09/11 15:33:14 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	k;
	size_t	len;

	i = 0;
	k = 0;
	if (!s || !(tab = (char**)malloc(sizeof(char*) * \
	(ft_count_words(s, c) + 1))))
		return (NULL);
	while (i < ft_count_words(s, c))
	{
		while (s[k] == c && s[k])
			k++;
		len = ft_count_letters(ft_strsub(s, k, ft_strlen(s) - k), c);
		tab[i] = (char*)malloc(sizeof(char) * (len + 1));
		if (!tab[i])
			return (NULL);
		tab[i] = ft_strsub(s, k, len);
		while (s[k] != c && s[k])
			k++;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
