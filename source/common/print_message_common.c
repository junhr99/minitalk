/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_message_common.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 22:21:53 by mmizuno           #+#    #+#             */
/*   Updated: 2021/06/04 19:39:45 by mmizuno          ###   ########.fr       */
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
