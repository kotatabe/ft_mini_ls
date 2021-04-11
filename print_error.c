/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotatabe <kotatabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 14:54:00 by kotatabe          #+#    #+#             */
/*   Updated: 2020/12/03 15:54:44 by kotatabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

int	error_opendir(void)
{
	perror("Can't open direcotry");
	return (0);
}

int	error_arg(void)
{
	ft_putendl_fd(strerror(22), 1);
	return (0);
}
