/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaussu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:17:32 by mafaussu          #+#    #+#             */
/*   Updated: 2021/11/23 19:38:30 by mafaussu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*stop;

	start = ft_strtrim_begin(s1, set);
	stop = ft_strtrim_end(s1, set);
	return (ft_substr(s1, start - s1, stop - start + 1));
}
