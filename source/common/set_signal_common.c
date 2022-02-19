/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_signal_common.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 03:56:30 by mmizuno           #+#    #+#             */
/*   Updated: 2021/06/07 18:14:59 by mmizuno          ###   ########.fr       */
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
