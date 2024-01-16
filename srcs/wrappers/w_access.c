/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_access.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:11:10 by ebinjama          #+#    #+#             */
/*   Updated: 2024/01/16 17:59:59 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrappers.h"

int	wopen(const char *path, int oflag)
{
	int	fetch;

	fetch = open(path, oflag);
	if (fetch == -1)
		return (wperror(path), exit(EXIT_FAILURE), -1);
	return (fetch);
}

int	waccess(const char *path, int mode)
{
	int	fetch;

	fetch = access(path, mode);
	if (fetch == -1)
		return (wperror(path), exit(EXIT_FAILURE), -1);
	return (fetch);
}

int	wclose(int fd)
{
	int	fetch;

	fetch = close(fd);
	if (fetch == -1)
		return (wperror(NULL), exit(EXIT_FAILURE), -1);
	return (fetch);
}
