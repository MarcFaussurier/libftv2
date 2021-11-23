/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaussu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 09:31:13 by mafaussu          #+#    #+#             */
/*   Updated: 2021/11/23 19:30:13 by mafaussu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_is_sep(char c, char charset)
{
	return (c == charset);
}

static void	*ft_free2(char **o, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(o[i]);
		i += 1;
	}
	free(o);
	return (0);
}

static void	ft_set_len_s(int *len, int a, char **s, char *b)
{
	*len = a;
	*s = b;
}

static char	*ft_str_s(char *s, int len)
{
	char	*o;
	int		y;

	o = malloc(len + 1);
	if (!o)
		return (0);
	y = -1;
	while (++y < len)
		o[y] = s[y];
	o[y] = 0;
	return (o);
}

char	**ft_split2(char **o, char *str, char charset)
{
	int		i;
	int		size;
	int		len;
	char	*s;

	size = 0;
	i = -1;
	len = 0;
	s = str;
	while (str[++i])
	{
		if (!ft_is_sep(str[i], charset))
			len += 1;
		if (len && (ft_is_sep(str[i], charset) || !str[i + 1]))
		{
			o[size] = ft_str_s(s, len);
			if (!o[size++])
				return (ft_free2(o, size - 1));
			ft_set_len_s(&len, 0, &s, str + i + 1);
		}
		else if (ft_is_sep(str[i], charset))
			ft_set_len_s(&len, 0, &s, str + i + 1);
	}
	o[size] = 0;
	return (o);
}
