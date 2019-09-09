/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 21:39:17 by bsatou            #+#    #+#             */
/*   Updated: 2019/09/09 15:39:40 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int					i;
	unsigned long int	result;
	int					flag;

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
	if ((result > 9223372036854775807 || i > 19) && !flag)
		return (-1);
	else if ((result > 9223372036854775807 || i > 19) && flag)
		return (0);
	if (flag)
		return (-1 * (int)result);
	return (result);
}
