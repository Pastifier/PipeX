/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:41:51 by ebinjama          #+#    #+#             */
/*   Updated: 2024/01/18 17:44:00 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOG_H
# define LOG_H

# ifndef BAD_FORMAT
#  define BAD_FORMAT "Format:\n\t./pipex file1 cmd1 cmd2 file2"
# endif // !BAD_FORMAT

# ifndef PATH_NOT_FOUND
#  define PATH_NOT_FOUND "Couldn't find PATH"
# endif // !PATH_NOT_FOUND

#endif // !LOG_H