#include <fcntl.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    int fd;
    char c;

    fd = open("42", O_WRONLY | O_CREAT, S_IRUSR, S_IWUSR);
    if (fd == -1)
    {
        printf("open() error");
        return (1);
    }
    c = 'Z';
    ft_putchar_fd(c, fd);
    if (close(fd) == -1)
    {
        printf("close() error");
        return (1);
    }
    return (0);
}