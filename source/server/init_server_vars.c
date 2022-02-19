/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_server_vars.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeon <hyjeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:47:25 by hyjeon            #+#    #+#             */
/*   Updated: 2022/02/19 16:47:28 by hyjeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/server.h"

void	init_server_vars(t_server_vars *vars)
{
	vars->pid_client_bits = 0;
	vars->pid_client_bit_count = 0;
	vars->message_bits = 0;
	vars->message_bit_count = 0;
	vars->message = NULL;
	vars->message_count = 0;
}

void	init_server_vars_message_bits(t_server_vars *vars)
{
	vars->message_bits = 0;
	vars->message_bit_count = 0;
}
