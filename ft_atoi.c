/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 21:39:17 by bsatou            #+#    #+#             */
/*   Updated: 2019/07/15 17:30:14 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int i;
	int result;
	int flag;

	result = 0;
	i = 0;
	flag = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || \
		str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			flag = 1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		result = result * 10;
		result += str[i] - '0';
		i++;
	}
	if (flag)
		result *= -1;
	return (result);
}
