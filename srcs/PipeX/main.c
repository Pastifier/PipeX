/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:50:11 by ebinjama          #+#    #+#             */
/*   Updated: 2024/01/16 18:00:23 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int c, char *v[], char *envp[])
{
	int fd = wopen("wrong", O_RDWR);
	(void)c; (void)v; (void)envp; (void)fd;
	return (0);
}