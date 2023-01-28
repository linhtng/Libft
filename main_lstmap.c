#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void    print_list(t_list *list)
{
    while (list)
    {
        printf("%s ", list->content);
        list = list->next;
    }
	printf("\n");
}

void	freelist(t_list *list)
{
	t_list *tmp;

	while (list != NULL)
	{
		tmp = list;
		list = list->next;
		free(tmp);
	}
}

void *addOne(void * p) 
{
	void * r = malloc(sizeof(int)); 
	*(int*)r = *(int*)p + 1; 
	return (r);
}

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *list;
	t_list *new0;
	t_list *new1;
	t_list *new2;
	t_list *new3;
	t_list *map;

	list = NULL;
	new0 = ft_lstnew(strdup("0"));
	new1 = ft_lstnew(strdup("1"));
	new2 = ft_lstnew(strdup("2"));
	new3 = ft_lstnew(strdup("3"));
	ft_lstadd_front(&list, new0);
	ft_lstadd_back(&list, new1);
	ft_lstadd_back(&list, new2);
	ft_lstadd_back(&list, new3);
	print_list(list);
	map = ft_lstmap(new0, &addOne, del);
	print_list(map);
	freelist(list);
	freelist(map);
	return (0);
}