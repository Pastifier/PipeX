/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:50:11 by ebinjama          #+#    #+#             */
/*   Updated: 2024/01/18 18:50:47 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include "log.h"

int	main(int c, char *v[], char *envp[])
{
	t_paths	paths;

	(void)v;
	if (c != 5)
		return (wexit(BAD_FORMAT), 1);
	paths = init_paths(envp, 5);
	return (0);
}
