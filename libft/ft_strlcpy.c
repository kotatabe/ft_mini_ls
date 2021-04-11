/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 18:52:00 by marvin            #+#    #+#             */
/*   Updated: 2020/07/08 13:40:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		n;
	char		*ssrc;

	n = size;
	ssrc = (char *)src;
	if (!dest)
		return (0);
	if (n != 0)
	{
		while (--n != 0)
		{
			if ((*dest++ = *src++) == '\0')
				break ;
		}
	}
	if (n == 0)
	{
		if (size != 0)
			*dest = '\0';
	}
	return (ft_strlen(ssrc));
}
