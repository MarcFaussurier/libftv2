/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaussu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:20:44 by mafaussu          #+#    #+#             */
/*   Updated: 2021/11/23 20:07:36 by mafaussu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static size_t	ft_strnlen(char *dst, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*dst++ && dstsize--)
		i += 1;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	initial_len;
	size_t	i;
	size_t	d2;

	d2 = dstsize;
	initial_len = ft_strnlen(dst, dstsize);
	while (*dst && d2--)
		dst += 1;
	if (dstsize > initial_len)
	{
		i = -1;
		while (src[++i] && (i < dstsize - initial_len - 1))
			dst[i] = src[i];
	}
	else
		return (dstsize + ft_strlen(src));
	if (dstsize)
		dst[i] = 0;
	return (initial_len + ft_strlen(src));
}
