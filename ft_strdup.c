/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaussu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:21:51 by mafaussu          #+#    #+#             */
/*   Updated: 2021/11/23 19:14:30 by mafaussu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *s1)
{
	char	*o;

	o = malloc(ft_strlen(s1) + 1);
	if (!o)
		return (0);
	ft_memcpy(o, s1, ft_strlen(s1) + 1);
	return (o);
}
