/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_signal_common.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeon <hyjeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:45:03 by hyjeon            #+#    #+#             */
/*   Updated: 2022/02/19 16:47:03 by hyjeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/common.h"

static void	handle_signal(int signal)
{
	g_receive_signal = signal;
}

void	set_signal(void)
{
	if (signal(SIGUSR1, &handle_signal) == SIG_ERR
		|| signal(SIGUSR2, &handle_signal) == SIG_ERR)
	{
		print_failure_message("ERROR: Fail to set Signal !!");
		exit(EXIT_FAILURE);
	}
}
