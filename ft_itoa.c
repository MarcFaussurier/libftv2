/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaussu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:36:50 by mafaussu          #+#    #+#             */
/*   Updated: 2021/11/23 18:40:04 by mafaussu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static unsigned short	ft_numlen(int n)
{
	size_t	out;

	out = 0;
	if (n == -2147483648)
		return (ft_strlen("-2147483648"));
	if (n < 0)
	{
		n = -n;
		out += 1;
	}
	while (n)
	{
		out += 1;
		n /= 10;
	}
	return (out);
}

char	*ft_itoa_end(char *out, int numlen, int n)
{
	isn = 0;
	i = 0;
	if (n == -2147483648)
	{
		free(out);
		return (ft_strdup("-2147483648"));
	}
	if (n < 0)
	{
		isn = 1;
		out[i++] = '-';
	}
	if (n < 0)
		n = -n;
	while (n)
	{
		out[numlen - i - !isn] = ('0' + n % 10);
		n /= 10;
		i += 1;
	}
	out[i] = '\0';
	return (out);
}

char	*ft_itoa(int n)
{
	unsigned short	numlen;
	size_t			i;
	char			*out;
	int				isn;

	if (n == 0)
		return (ft_strdup("0"));
	numlen = ft_numlen(n);
	out = malloc(sizeof(char) * (numlen + 1));
	if (!out)
		return (0);
	else
		return (ft_itoa_end(out, numlen, n));
}
