#include <libft.h>

static unsigned short			ft_numlen(int n)
{
	size_t				out;

	out = 0;
	if (n == -2147483648)
		return (ft_strlen("-2147483648"));
	if (n < 0 && (n = -n))
		out += 1;
	while (n)
	{
		out += 1;
		n /= 10;
	}
	return (out);
}

char				*ft_itoa(int n)
{
	unsigned short	numlen;
	size_t			i;
	char			*out;
	int				isn;

	if (n == 0)
		return (ft_strdup("0"));
	numlen = ft_numlen(n);
	if (!(out = malloc(sizeof(char) * (numlen + 1))))
		return (NULL);
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
