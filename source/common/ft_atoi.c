/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyjeon <hyjeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:44:19 by hyjeon            #+#    #+#             */
/*   Updated: 2022/02/19 16:44:26 by hyjeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/common.h"

static void	skipspace_and_checksign(char *nptr, int *pos, int *sign)
{
	while (nptr[*pos]
		&& (nptr[*pos] == '\f' || nptr[*pos] == '\n' || nptr[*pos] == '\r'
			|| nptr[*pos] == ' ' || nptr[*pos] == '\t' || nptr[*pos] == '\v'))
		(*pos)++;
	if (nptr[*pos] == '-')
	{
		*sign = -1;
		(*pos)++;
	}
	else if (nptr[*pos] == '+')
	{
		*sign = 1;
		(*pos)++;
	}
}

int	ft_atoi(const char *nptr)
{
	int				pos;
	int				sign;
	unsigned long	value;

	pos = 0;
	sign = 1;
	value = 0;
	skipspace_and_checksign((char *)nptr, &pos, &sign);
	while (nptr[pos] && ('0' <= nptr[pos] && nptr[pos] <= '9'))
	{
		if ((sign == 1) && ((922337203685477580ul < value)
				|| (value == 922337203685477580ul && '7' < nptr[pos])))
			return (-1);
		if ((sign == -1) && ((922337203685477580ul < value)
				|| ((value == 922337203685477580ul) && '8' < nptr[pos])))
			return (0);
		value *= 10;
		value += nptr[pos] - '0';
		pos++;
	}
	return ((int)value * sign);
}
