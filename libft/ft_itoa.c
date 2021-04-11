/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 16:47:22 by marvin            #+#    #+#             */
/*   Updated: 2020/07/06 16:18:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nbrlen(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n >= 10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*putnbr(char *str, int n, int n_len)
{
	while (n > 0)
	{
		str[n_len] = '0' + (n % 10);
		n = n / 10;
		n_len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		n_len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n_len = nbrlen(n);
	if (!(str = (char *)malloc(sizeof(char) * n_len + 1)))
		return (NULL);
	str[n_len--] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		n = n * -1;
		str[0] = '-';
	}
	return (putnbr(str, n, n_len));
}
