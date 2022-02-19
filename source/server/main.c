/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 21:28:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/06/07 18:16:35 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/server.h"

int		g_receive_signal;


void	exit_server(t_server_vars *vars, char *message, bool success)
{
	free_receive_message(vars);
	if (success)
	{
		print_success_message(message);
		exit(EXIT_SUCCESS);
	}
	else
	{
		print_failure_message(message);
		exit(EXIT_FAILURE);
	}
}


static void	check_argument(int argc, char **argv, t_server_vars *vars)
{
	(void)argv;
	if (argc != 1)
		exit_server(vars, "USAGE: ./server", false);
}


int	main(int argc, char **argv)
{
	t_server_vars	vars;

	init_server_vars(&vars);
	check_argument(argc, argv, &vars);
	g_receive_signal = 0;
	set_signal();
	print_pid("SERVER", getpid());
	while (1)
	{
		if (g_receive_signal == SIGUSR1 || g_receive_signal == SIGUSR2)
			receive_bit(&vars, g_receive_signal);
		pause();
	}
	return (EXIT_SUCCESS);
}
