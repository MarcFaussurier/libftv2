/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaussu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:18:17 by mafaussu          #+#    #+#             */
/*   Updated: 2021/11/23 18:19:09 by mafaussu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needlelen;

	if (*needle == '\0')
		return ((char *)haystack);
	needlelen = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= needlelen)
		if (*haystack == *needle && ft_memcmp(haystack, needle, needlelen) == 0)
			return ((char *)haystack);
	else
		haystack++;
	return (NULL);
}
