/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_message.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeon <hyjeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:48:25 by hyjeon            #+#    #+#             */
/*   Updated: 2022/02/19 16:48:27 by hyjeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/server.h"

void	print_receive_message(t_server_vars *vars)
{
	ft_putstr_fd("[ CLIENT ProcessID: ", STDOUT_FILENO);
	ft_putnbr_fd(vars->pid_client_bits, STDOUT_FILENO);
	ft_putstr_fd(" ]", STDOUT_FILENO);
	ft_putendl_fd(vars->message, STDOUT_FILENO);
}
