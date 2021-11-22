#include <libft.h>

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list		*tmp;

	if (!lst)
		return ;
	if (del)
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tmp;
		}
	*lst = NULL;
}
