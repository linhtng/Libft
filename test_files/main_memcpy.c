#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char *dst = (void *)0;
    char *src = (void *)0;
    char *ft_dst = (void *)0;
    char *ft_src = (void *)0;
    size_t n = 0;

    memcpy(dst, src, n);
    printf("memcpy %s \n", dst);
    ft_memcpy(ft_dst, ft_src, n);
    printf("ft_memcpy %s \n", ft_dst);
	return (0);
}