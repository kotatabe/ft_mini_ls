/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 19:26:00 by marvin            #+#    #+#             */
/*   Updated: 2020/07/06 16:19:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	i = 0;
	dst = (unsigned char *)buf1;
	src = (unsigned char *)buf2;
	if (buf1 == NULL && buf2 == NULL)
		return (0);
	if (src > dst)
	{
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		while (n--)
			dst[n] = src[n];
	}
	return (dst);
}
