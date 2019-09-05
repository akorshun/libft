/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 19:58:41 by bsatou            #+#    #+#             */
/*   Updated: 2019/09/05 21:10:24 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(const char *str)
{
	int		i;
	int		size;
	char	c;
	char	*rev_str;

	i = 0;
	size = 0;
	rev_str = (char*)str;
	while (str[size] != '\0')
		size = size + 1;
	while (i < size - 1)
	{
		c = rev_str[i];
		rev_str[i] = rev_str[size - 1];
		rev_str[size - 1] = c;
		size = size - 1;
		i = i + 1;
	}
	return (rev_str);
}
