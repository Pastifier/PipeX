/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:00:07 by ebinjama          #+#    #+#             */
/*   Updated: 2024/01/19 22:23:14 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include "log.h"

static bool commit_fork(char *v[], char *paths[]);

// TODO:
// Parse arguments that contain flags.
// Turn them into a 2D array that execve can accept.
int main(int c, char *v[], char *envp[])
{
	t_paths paths;
	int access_error;
	pid_t child;

	(void)v;
	if (c != 5)
		return (wexit(BAD_FORMAT), 1);
	paths = init_paths(envp, 5);
	if (!paths.arr)
		return (wexit(PROGRAM_SAYS PATH_NOT_FOUND), 1);
	access_error = access(v[1], R_OK);
	if (access_error)
		wstrerror(v[1], ENOENT);
	child = fork();
	return (free_paths(&paths), 0);
}
