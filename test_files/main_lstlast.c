#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void    print_list(t_list *list)
{
    while (list)
    {
        ft_putstr(list->content);
        list = list->next;
    }
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

int	main(void)
{
	t_list *list;
	t_list *new0;
	t_list *new1;
	t_list *new2;
	t_list *new3;

	list = NULL;
	new0 = ft_lstnew("0\n");
	new1 = ft_lstnew("1\n");
	new2 = ft_lstnew("2\n");
	new3 = ft_lstnew("last\n");
	ft_lstadd_front(&list, new3);
	ft_lstadd_front(&list, new2);
	ft_lstadd_front(&list, new1);
	ft_lstadd_front(&list, new0);
	//print_list(list);
	printf("%s", ft_lstlast(list)->content);
	freelist(list);
	return (0);
}