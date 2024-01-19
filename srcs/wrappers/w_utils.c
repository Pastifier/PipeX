/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_utils.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:55:57 by ebinjama          #+#    #+#             */
/*   Updated: 2024/01/19 15:17:03 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wrappers.h"

void	wperror(const char *s)
{
	ft_putstr_fd(RED, STDERR_FILENO);
	perror("pipex");
	ft_putstr_fd((char *)s, STDERR_FILENO);
	ft_putendl_fd(DFLT, STDERR_FILENO);
}

void	wexit(const char *message)
{
	ft_putstr_fd(RED, STDERR_FILENO);
	ft_putendl_fd((char *)message, STDERR_FILENO);
	ft_putstr_fd(DFLT, STDERR_FILENO);
}

void	wstrerror(const char *cause, int errnum)
{
	ft_putstr_fd(RED"pipex: ", STDERR_FILENO);
	ft_putstr_fd(strerror(errnum), STDERR_FILENO);
	ft_putstr_fd(": ", STDERR_FILENO);
	ft_putstr_fd((char *)cause, STDERR_FILENO);
	ft_putendl_fd(DFLT, STDERR_FILENO);
}
