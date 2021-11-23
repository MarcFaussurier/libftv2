/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaussu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:20:43 by mafaussu          #+#    #+#             */
/*   Updated: 2021/11/23 19:41:18 by mafaussu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_split_len(char *str, char charset)
{
	int	size;
	int	i;
	int	len;

	size = 1;
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == charset)
		{
			if (len)
				size += 1;
			len = 0;
		}
		else
			len += 1;
		if (!str[i + 1] && len)
			size += 1;
		i += 1;
	}
	return (size);
}

char	**ft_split(char const *str, char charset)
{
	char	**o;

	o = malloc(ft_split_len((char *)str, charset) * sizeof(char *));
	if (!o)
		return (0);
	return (ft_split2((char **)o, (char *)str, charset));
}
