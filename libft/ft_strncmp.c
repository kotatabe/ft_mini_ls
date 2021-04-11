/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 12:00:06 by marvin            #+#    #+#             */
/*   Updated: 2020/07/08 13:34:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *str1, const char *str2, size_t len)
{
	size_t			count;
	int				diff;
	unsigned char	*s1;
	unsigned char	*s2;

	count = 0;
	diff = str1[count] - str2[count];
	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (count < len)
	{
		diff = s1[count] - s2[count];
		if (s1[count] == '\0' || s2[count] == '\0')
			return (diff);
		if (diff == 0)
			count++;
		else
			return (diff);
	}
	return (0);
}
