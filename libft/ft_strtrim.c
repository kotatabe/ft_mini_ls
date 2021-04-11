/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 18:07:53 by marvin            #+#    #+#             */
/*   Updated: 2020/07/06 16:35:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fst_letter(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	while (set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			j = 0;
			i++;
		}
		else
			j++;
	}
	ptr = (char *)&s1[i];
	return (ptr);
}

char	*last_letter(char const *s1, char const *set)
{
	size_t	j;
	size_t	count;
	char	*ptr;

	j = 0;
	count = ft_strlen((char *)s1) - 1;
	while (set[j] != '\0')
	{
		if (s1[count] == set[j])
		{
			j = 0;
			count--;
		}
		else
			j++;
	}
	ptr = (char *)&s1[count];
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(fst_letter(s1, set)) - ft_strlen(last_letter(s1, set)) + 2;
	if (!(ptr = (char *)malloc(sizeof(char) * (len))))
		return (NULL);
	ft_strlcpy(ptr, fst_letter(s1, set), len);
	return (ptr);
}
