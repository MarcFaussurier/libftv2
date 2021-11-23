/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaussu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:42:13 by mafaussu          #+#    #+#             */
/*   Updated: 2021/11/23 18:42:33 by mafaussu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*o;
	size_t			bytes;
	size_t			i;

	bytes = count * size;
	o = malloc(bytes);
	i = 0;
	while (i < bytes)
	{
		o[i] = 0;
		i += 1;
	}
	return ((void *) o);
}
