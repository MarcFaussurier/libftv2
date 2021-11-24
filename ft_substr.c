/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaussu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:15:15 by mafaussu          #+#    #+#             */
/*   Updated: 2021/11/23 19:39:08 by mafaussu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	min_len;
	char			*out;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	else
	{
		min_len = ft_strlen(&s[start]);
		if (min_len < len)
			len = min_len;
		out = malloc((len + 1) * sizeof(char));
		if (!out)
			return (NULL);
		i = start;
		while (s[i] && (i - start) < len)
		{
			out[i - start] = s[i];
			i += 1;
		}
		out[i - start] = '\0';
		return (out);
	}
}
