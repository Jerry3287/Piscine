#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
    t_list	*temp;

	temp->data = data;
	temp->next = 0;
	return (temp);
}