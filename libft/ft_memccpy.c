/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 17:13:00 by marvin            #+#    #+#             */
/*   Updated: 2020/07/07 19:18:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		uc;
	unsigned char		*ddest;
	unsigned char		*ssrc;

	i = 0;
	uc = (unsigned char)c;
	ddest = (unsigned char *)dest;
	ssrc = (unsigned char *)src;
	while (n--)
	{
		ddest[i] = ssrc[i];
		if (ssrc[i] == uc)
			return (&ddest[i + 1]);
		i++;
	}
	return (NULL);
}
