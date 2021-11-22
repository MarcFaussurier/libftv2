
#include <libft.h>

int 	ft_is_char_in(char c, char const *str)
{
	unsigned int	i;

	if (str)
	{
		i = -1;
		while (str[++i])
			if (str[i] == c)
				return (1);
	}
	return (0);
}
