/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzuccare <vzuccare@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:53:51 by vzuccare          #+#    #+#             */
/*   Updated: 2024/03/07 18:16:27 by vzuccare         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "./libft/ft_printf.h"
# include "./libft/libft.h"
# include <errno.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <fcntl.h>

typedef struct s_pipex
{
	pid_t	pid1;
	pid_t	pid2;
	int		fd[2];
	int		infile;
	int		outfile;
	char	**path;
	char	*cmd[2];
	char	**args[2];
}	t_pipex;

void	init_exec(t_pipex *pipex, char **av, int i);
char	*get_env_path(char **env);
char	*get_cmd_path(char **path, char *cmd);
char	*first_word(char *str);
void	ft_error(t_pipex *pipex);
void	pipex_init(t_pipex *pipex);
void	free_tab(char **tab);
void	child_process(t_pipex *pipex, char **av);
void	child2_process(t_pipex *pipex, char **av);
void	free_child(t_pipex *pipex);
void	free_child2(t_pipex *pipex);

#endif