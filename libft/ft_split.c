/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 16:29:54 by marvin            #+#    #+#             */
/*   Updated: 2020/07/08 18:01:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		size_elements(char *str, char c)
{
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (str[i] == c)
		i++;
	while (str[i] != '\0')
	{
		size++;
		while (str[i] != c && str[i] != '\0')
			i++;
		while (str[i] == c && str[i] != '\0')
			i++;
	}
	return (size);
}

void	free_all(char **pptr, int j)
{
	while (j)
		free(pptr[j--]);
	free(pptr);
}

char	**arrs_set(char **pptr, char *s, char c, int count)
{
	int		i;
	int		j;
	int		start;
	int		end;

	i = 0;
	j = 0;
	while (count-- > 0)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		end = i;
		if (!(pptr[j++] = ft_substr(s, start, end - start)))
		{
			free_all(pptr, j - 1);
			return (NULL);
		}
	}
	pptr[j] = NULL;
	return (pptr);
}

char	**ft_split(char const *s, char c)
{
	char	**pptr1;
	size_t	count;

	if (!s)
		return (NULL);
	if (!*s)
	{
		if (!(pptr1 = (char **)malloc(sizeof(char *))))
			return (NULL);
		*pptr1 = NULL;
		return (pptr1);
	}
	count = size_elements((char *)s, c);
	if (!(pptr1 = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	return (arrs_set(pptr1, (char *)s, c, count));
}
