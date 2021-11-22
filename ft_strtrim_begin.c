#include <libft.h>

char *ft_strtrim_begin(char const *s1, char const *set)
{
	unsigned int	i;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char*)s1);
	i = -1;
	while (s1[++i] && ft_is_char_in(s1[i], set))
		;
	return ((char*)s1 + i);
}
