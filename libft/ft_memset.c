/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 13:45:46 by marvin            #+#    #+#             */
/*   Updated: 2020/06/26 15:25:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t			count;
	unsigned char	*bbuf;

	count = 0;
	bbuf = (unsigned char*)buf;
	while (count < n)
	{
		*bbuf = ch;
		bbuf++;
		count++;
	}
	return (buf);
}
