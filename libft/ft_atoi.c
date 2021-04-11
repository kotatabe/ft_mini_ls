/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 11:32:58 by marvin            #+#    #+#             */
/*   Updated: 2020/07/06 18:58:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int i;
	int num;
	int flag;

	i = 0;
	num = 0;
	flag = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag = 1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - 48;
		i++;
	}
	if (flag == 1)
		num *= -1;
	return (num);
}
