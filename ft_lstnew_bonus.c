#include <libft.h>

t_list		*ft_lstnew(void *content)
{
	t_list		*out;

	if (!(out = malloc(1 * sizeof(t_list))))
		return (NULL);
	out->content = content;
	out->next = NULL;
	return (out);
}
