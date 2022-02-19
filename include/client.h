/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 21:29:52 by mmizuno           #+#    #+#             */
/*   Updated: 2021/06/06 14:55:26 by mmizuno          ###   ########.fr       */
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
