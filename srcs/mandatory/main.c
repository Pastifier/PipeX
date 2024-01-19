/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:00:07 by ebinjama          #+#    #+#             */
/*   Updated: 2024/01/19 16:06:00 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include "log.h"

int	main(int c, char *v[], char *envp[])
{
	t_paths	paths;
	int		access_error;

	(void) v;
	if (c != 5)
		return (wexit(BAD_FORMAT), 1);
	paths = init_paths(envp, 5);
	if (!paths.arr)
//		free the bois!
		return (wexit(PROGRAM_NAME PATH_NOT_FOUND), 1);
	access_error = access(v[1], R_OK);
	if (access_error)
		wstrerror(v[1], ENOENT);
	// bois to free: {paths.arr, paths.first}
	return (0);
}
