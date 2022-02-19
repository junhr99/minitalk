/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeon <hyjeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:39:55 by hyjeon            #+#    #+#             */
/*   Updated: 2022/02/19 16:41:51 by hyjeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_H
# define COMMON_H

// ================================= const ================================== //

# define MIN_PID					100
# define MAX_PID					99998
# define PID_BIT_COUNT				18
# define MSG_BIT_COUNT				8

# define ASCII_EOT					0x4

# include <signal.h>
# include <stdint.h>
# include <stdbool.h>
# include <unistd.h>
# include <stdlib.h>

extern int	g_receive_signal;

void	print_success_message(char *message);
void	print_failure_message(char *message);
void	print_pid(char *client_or_server, int32_t pid);

void	set_signal(void);

size_t	ft_strlen(char *str);
int		ft_isdigit(int c);
int		ft_atoi(const char *nptr);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	ft_putchar_fd(char c, int fd);

#endif
