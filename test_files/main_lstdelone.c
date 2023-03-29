#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

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
		printf("\n");
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

	list = NULL;
	new0 = ft_lstnew(strdup("test"));
	printf("%s\n", new0->content);
	//print_list(list);
	ft_lstdelone(new0, &del);
	//printf("%s\n", new0->content);
	return (0);
}