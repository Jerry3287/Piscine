#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*temp;

	temp = ft_create_elem(data);
	if (temp == 0)
		return ;
	temp->next = begin_list[0];
	begin_list[0] = temp;
}