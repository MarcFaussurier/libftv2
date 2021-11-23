/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaussu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:21:11 by mafaussu          #+#    #+#             */
/*   Updated: 2021/11/23 18:21:17 by mafaussu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*out;
	unsigned int	dstsize;

	if (!s1 && !s2)
		return (ft_strdup(""));
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	else
	{
		dstsize = ft_strlen(s1) + ft_strlen(s2) + 1;
		out = malloc(dstsize * sizeof(char));
		if (!out)
			return (NULL);
		ft_strlcpy(out, s1, ft_strlen(s1) + 1);
		ft_strlcat(out, s2, dstsize);
		return (out);
	}
}
