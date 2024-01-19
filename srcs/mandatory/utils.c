/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:32:54 by ebinjama          #+#    #+#             */
/*   Updated: 2024/01/19 16:52:25 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*get_path(char *envp[])
{
	while (*envp)
	{
		if (!ft_strncmp("PATH=", *envp++, 5))
			return (*--envp);
	}
	return (NULL);
}

t_paths	init_paths(char *envp[], size_t inc)
{
	t_paths	self;
	char	*path;

	self.increment = inc;
	path = get_path(envp);
	self.arr = ft_split(path, ":").array;
	if (!self.arr)
		return ((t_paths){0, 0, 0});
	self.first = *(self.arr);
	*(self.arr) += inc;
	return (self);
}

void	free_paths(t_paths *paths)
{
	char	*dummy;
	char	**iter;

	if (!paths || !paths->arr)
		return ;
	*(paths->arr) -= paths->increment;
	iter = paths->arr;
	while (*iter)
	{
		dummy = *iter;
		++iter;
		free(dummy);
	}
	free(paths->arr);
}