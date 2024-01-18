/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_utils.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:55:57 by ebinjama          #+#    #+#             */
/*   Updated: 2024/01/18 18:50:26 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wrappers.h"

void	wperror(const char *s)
{
	ft_putstr_fd(RED, STDERR_FILENO);
	perror(s);
	ft_putstr_fd(DFLT, STDERR_FILENO);
}

void	wexit(const char *message)
{
	ft_putstr_fd(RED, STDERR_FILENO);
	ft_putendl_fd((char *)message, STDERR_FILENO);
	ft_putstr_fd(DFLT, STDERR_FILENO);
}
