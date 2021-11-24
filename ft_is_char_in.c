/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_char_in.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaussu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:41:46 by mafaussu          #+#    #+#             */
/*   Updated: 2021/11/24 16:27:59 by mafaussu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_char_in(char c, char const *str)
{
	unsigned int	i;

	if (str)
	{
		i = -1;
		while (str[++i])
			if (str[i] == c)
				return (1);
	}
	return (0);
}
