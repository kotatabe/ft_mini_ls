/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini_ls.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotatabe <kotatabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:14:54 by kotatabe          #+#    #+#             */
/*   Updated: 2020/12/03 15:55:42 by kotatabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

void	swap_info(t_info *info1, t_info *info2)
{
	t_info	tmp;

	tmp = *info1;
	*info1 = *info2;
	*info2 = tmp;
}

void	ft_sort(t_info *dir_info, int index)
{
	int	i;
	int	j;

	i = 0;
	while (i < index - 1)
	{
		j = index - 1;
		while (i < j)
		{
			if (dir_info[j - 1].sec > dir_info[j].sec)
				swap_info(&(dir_info[j - 1]), &(dir_info[j]));
			if (dir_info[j - 1].sec == dir_info[j].sec)
			{
				if (dir_info[j - 1].nsec > dir_info[j].nsec)
					swap_info(&(dir_info[j - 1]), &(dir_info[j]));
				if (dir_info[j - 1].nsec == dir_info[j].nsec \
				&& 0 > ft_strcmp(dir_info[j - 1].name, dir_info[j].name))
					swap_info(&(dir_info[j - 1]), &(dir_info[j]));
			}
			j--;
		}
		i++;
	}
}

void	put_filename(t_info *dir_info, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		ft_putendl_fd(dir_info[i].name, 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	DIR				*dp;
	struct dirent	*dir;
	struct stat		dir_stat;
	t_info			dir_info[100];
	int				i;

	if (1 < argc && argv[0])
		return (error_arg());
	if ((dp = opendir(".")) == NULL)
		return (error_opendir());
	i = 0;
	while ((dir = readdir(dp)) != NULL)
	{
		if (dir->d_ino == 0 || (dir->d_name[0] == '.'))
			continue ;
		lstat(dir->d_name, &dir_stat);
		dir_info[i].name = dir->d_name;
		dir_info[i].sec = (long long)dir_stat.st_mtimespec.tv_sec;
		dir_info[i].nsec = (long long)dir_stat.st_mtimespec.tv_nsec;
		i++;
	}
	ft_sort(dir_info, i);
	put_filename(dir_info, i);
	(void)closedir(dp);
	return (0);
}
