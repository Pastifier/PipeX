/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:50:51 by ebinjama          #+#    #+#             */
/*   Updated: 2024/01/18 18:49:34 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "wrappers.h"
# include <sys/wait.h>

/*---STRUCTS---*/
typedef struct s_paths
{
	char	**arr;
	char	*first;
	size_t	increment;
}	t_paths;

/*---PATH FUNCS---*/

char	*get_path(char *envp[]);
t_paths	init_paths(char *envp[], size_t inc);

#endif // !PIPEX_H