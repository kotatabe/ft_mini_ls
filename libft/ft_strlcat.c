/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:57:32 by marvin            #+#    #+#             */
/*   Updated: 2020/07/08 13:41:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_min(size_t str1, size_t str2)
{
	if (str1 < str2)
		return (str1);
	return (str2);
}

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	destlen;
	size_t	srclen;
	size_t	di;
	size_t	si;

	destlen = ft_strlen(dest);
	srclen = ft_strlen((char *)src);
	di = destlen;
	si = 0;
	while (src[si] != '\0' && di + 1 < destsize)
		dest[di++] = src[si++];
	dest[di] = '\0';
	return (srclen + ft_min(destlen, destsize));
}
