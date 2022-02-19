/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeon <hyjeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:43:40 by hyjeon            #+#    #+#             */
/*   Updated: 2022/02/19 15:43:49 by hyjeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_H
# define CLIENT_H

// ================================= const ================================== //

# define TIMEOUT_COUNT				100000

// ================================ library ================================= //

# include "common.h"

// ========================= prototype declaration ========================== //

void	exit_client(char *message, bool success);

void	check_argument(int argc, char **argv);

void	send_bits_pid_client(int32_t pid_server, int32_t send_pid_client);
void	send_bits_message(int32_t pid_server, char *send_message);

#endif
