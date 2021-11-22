/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaussu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 09:31:13 by mafaussu          #+#    #+#             */
/*   Updated: 2021/11/22 15:36:34 by mafaussu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_is_sep(char c, char charset)
{
	return (c == charset);
}

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
		if (ft_is_sep(str[i], charset))
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
	y = -1;
	while (++y < len)
		o[y] = s[y];
	o[y] = 0;
	return (o);
}

char	**ft_split(char *str, char charset)
{
	int		i;
	int		size;
	int		len;
	char	**o;
	char	*s;

	o = malloc(ft_split_len(str, charset) * sizeof(char *));
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
			o[size++] = ft_str_s(s, len);
			ft_set_len_s(&len, 0, &s, str + i + 1);
		}
		else if (ft_is_sep(str[i], charset))
			ft_set_len_s(&len, 0, &s, str + i + 1);
	}
	o[size] = 0;
	return (o);
}
