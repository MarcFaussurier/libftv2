#include <libft.h>

char				*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*out;

	if (!s || !f)
		return (ft_strdup(""));
	if (!(out = malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (s[++i])
		out[i] = f(i, s[i]);
	out[i] = '\0';
	return (out);
}

