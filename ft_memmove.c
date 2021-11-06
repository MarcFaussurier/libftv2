/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaussu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:31:06 by mafaussu          #+#    #+#             */
/*   Updated: 2021/11/06 19:16:28 by mafaussu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;

	if ( 	( dst < src && dst + len >= src ) ||
			(src < dst && src + len >= dst) )
		return (dst);
	i = 0;
	d = dst;
	while (i++ < len)
		*d++ = *(unsigned char*)src++;
	return (dst);
}
