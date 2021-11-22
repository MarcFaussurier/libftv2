#include <libft.h>

int			ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst)
	{
		i += 1;
		lst = lst->next;
	}
	return (i);
}
