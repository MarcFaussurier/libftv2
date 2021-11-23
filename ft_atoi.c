/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaussu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:42:42 by mafaussu          #+#    #+#             */
/*   Updated: 2021/11/23 18:42:55 by mafaussu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *str)
{
	int	o;
	int	sign;

	o = 0;
	sign = 1;
	while (ft_isspace(*str))
		str += 1;
	if (*str == '+')
	{
		str += 1;
	}
	else if (*str == '-')
	{
		sign = -1;
		str += 1;
	}
	while (ft_isdigit(*str))
	{
		o *= 10;
		o += *str - '0';
		str += 1;
	}
	return (o * sign);
}
