#include <fcntl.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    int fd;
    char *s = "Hello world!";

    fd = open("putendl_fd", O_WRONLY | O_CREAT, S_IRUSR, S_IWUSR);
    if (fd == -1)
    {
        printf("open() error");
        return (1);
    }
    ft_putendl_fd(s, fd);
    if (close(fd) == -1)
    {
        printf("close() error");
        return (1);
    }
    return (0);
}