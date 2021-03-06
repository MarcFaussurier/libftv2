/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaussu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:22:08 by mafaussu          #+#    #+#             */
/*   Updated: 2021/11/23 18:22:41 by mafaussu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
		if (!*s)
			return (0);
	else
		s += 1;
	return ((char *)s);
}
