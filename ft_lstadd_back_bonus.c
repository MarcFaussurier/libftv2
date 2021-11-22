#include <libft.h>

void		ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*list;

	if (!alst)
		return ;
	if (!*alst)
		*alst = new;
	else
	{
		list = ft_lstlast(*alst);
		list->next = new;
	}
}
