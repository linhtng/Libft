#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

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

	list = NULL;
	list = ft_lstnew("testes");
	print_list(list);
	freelist(list);
	return (0);
}