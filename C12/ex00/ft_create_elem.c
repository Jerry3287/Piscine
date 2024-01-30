#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
    t_list	*temp;

	temp = (t_list *) malloc (sizeof(t_list));

	if (temp == 0)
		return 0;	

	temp->data = data;
	temp->next = 0;
	return (temp);
}