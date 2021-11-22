#include <libft.h>

char *ft_strdup(const char *s1)
{
	char *o;

	o = malloc(ft_strlen(s1) + 1);
	ft_memcpy(o, s1, ft_strlen(s1) + 1);
	return (o);
}
