#include <libft.h>

void 	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*o;
	size_t 			bytes;
	size_t			i;

	bytes = count * size;
	o = malloc(bytes);
	i = 0;
	while (i < bytes)
	{
		o[i] = 0;
		i += 1;
	}
	return ((void*) o);
}
