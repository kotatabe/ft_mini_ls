/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini_ls.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotatabe <kotatabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:40:17 by kotatabe          #+#    #+#             */
/*   Updated: 2020/12/03 15:52:08 by kotatabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MINI_LS_H

# define FT_MINI_LS_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/stat.h>
# include <dirent.h>
# include "libft/libft.h"

int				error_opendir();
int				error_arg();

typedef struct	s_info
{
	long long	sec;
	long long	nsec;
	char		*name;
}				t_info;

#endif
