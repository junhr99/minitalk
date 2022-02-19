/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_message_common.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeon <hyjeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:46:27 by hyjeon            #+#    #+#             */
/*   Updated: 2022/02/19 16:46:34 by hyjeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/server.h"

void	print_success_message(char *message)
{
	ft_putendl_fd(message, STDOUT_FILENO);
}

void	print_failure_message(char *message)
{
	ft_putendl_fd(message, STDOUT_FILENO);
}

void	print_pid(char *client_or_server, int32_t pid)
{
	ft_putstr_fd("[ ", STDOUT_FILENO);
	ft_putstr_fd(client_or_server, STDOUT_FILENO);
	ft_putstr_fd(" ProcessID: ", STDOUT_FILENO);
	ft_putnbr_fd((int)pid, STDOUT_FILENO);
	ft_putendl_fd(" ]", STDOUT_FILENO);
}
