/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrappers.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:12:00 by ebinjama          #+#    #+#             */
/*   Updated: 2024/01/19 15:00:15 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRAPPERS_H
# define WRAPPERS_H

# include "../libft/includes/libft.h"
# include <stdio.h>
# include <fcntl.h>
# include <string.h>
# include <sys/syscall.h>
# include <errno.h>

/*---COLOURS---*/
# ifndef RED
#  define RED "\x1b[31m"
# endif // !RED

# ifndef DFLT
#  define DFLT "\x1b[0m"
# endif // !DFLT

// TODO:
// dup, dup2, execve, fork, pip, unlink, wait, waitpid.

/*---WRAPPERS---*/

// see perror
void	wperror(const char *s);

// see open(2)
int		wopen(const char *path, int oflag);

// see access
int		waccess(const char *path, int mode);

// see close(2)
int		wclose(int fd);

// see exit(3)
void	wexit(const char *message);

// see strerror(3)
void	wstrerror(const char *cause, int errnum);

#endif // !WRAPPERS_H