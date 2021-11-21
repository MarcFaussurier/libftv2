
#include <libft.h>

size_t 		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t    initial_len;
	size_t		i;

	initial_len = ft_strlen(dst);
	while (*dst)
		dst += 1;
	if (dstsize > initial_len)
	{
		i = -1;
		while (src[++i] && (i < dstsize - initial_len - 1))
			dst[i] = src[i];
	}
	else
		return (dstsize + ft_strlen(src));
	if (dstsize)
		dst[i] = 0;
	return (initial_len + ft_strlen(src));
}
