/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_end.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaussu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:16:30 by mafaussu          #+#    #+#             */
/*   Updated: 2021/11/23 18:17:00 by mafaussu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim_end(char const *s1, char const *set)
{
	int		i;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	i = ft_strlen(s1);
	while (i && ft_is_char_in(s1[--i], set))
		;
	return ((char *)s1 + i);
}
