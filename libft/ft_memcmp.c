/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:38:45 by marvin            #+#    #+#             */
/*   Updated: 2020/06/26 19:25:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	int				i;
	int				diff;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)buf1;
	str2 = (unsigned char *)buf2;
	diff = str1[i] - str2[i];
	while (n--)
	{
		diff = str1[i] - str2[i];
		if (diff == 0)
			i++;
		else
			return (diff);
	}
	return (0);
}
