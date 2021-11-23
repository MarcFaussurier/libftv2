/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaussu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:31:06 by mafaussu          #+#    #+#             */
/*   Updated: 2021/11/23 18:25:08 by mafaussu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;

	d = dst + len - 1;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{	
		while (len)
		{
			*d-- = *((unsigned char *)(src + len - 1));
			if (!len--)
				break ;
		}
	}
	else if (dst < src)
		ft_memcpy(dst, src, len);
	return (dst);
}
