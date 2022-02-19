/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeon <hyjeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:42:15 by hyjeon            #+#    #+#             */
/*   Updated: 2022/02/19 16:42:33 by hyjeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H

# include "common.h"

// ================================= struct ================================= //

typedef struct s_server_vars
{
	int32_t		pid_client_bits;
	int			pid_client_bit_count;
	int32_t		message_bits;
	int			message_bit_count;
	char		*message;
	int			message_count;
}				t_server_vars;

// ========================= prototype declaration ========================== //

void	exit_server(t_server_vars *vars, char *message, bool success);

void	init_server_vars(t_server_vars *vars);
void	init_server_vars_message_bits(t_server_vars *vars);

void	receive_bit(t_server_vars *v, int signal);

void	append_receive_message(t_server_vars *vars);
void	free_receive_message(t_server_vars *vars);

void	print_receive_message(t_server_vars *vars);

#endif
