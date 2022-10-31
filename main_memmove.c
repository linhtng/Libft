#include <memory.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    /*char str1[] = "memmove can be very useful......";
    char str2[] = "memmove can be very useful......";
    char str3[] = "memmove can be very useful......";

    memcpy(str1 + 20, str1 + 15, 11);
    memmove(str2 + 20, str2 + 15, 11);
    ft_memmove(str3 + 20, str3 + 15, 11);
    printf( "memcpy result:\n" );
    printf("    %s \n", str1);
    printf( "memmove result:\n" );
    printf("    %s \n", str2);
    printf( "ft_memmove result:\n" );
    printf("    %s \n", str3);*/

    /*char *dst = (void *)0;
    char *src = (void *)0;
    char *ft_dst = (void *)0;
    char *ft_src = (void *)0;
    size_t n = 5;

    memmove(dst, src, n);
    printf("memmove result:    %s \n", dst);
    ft_memmove(ft_dst, ft_src, n);
    printf("ft_memmove result:    %s \n", ft_dst);*/

    int size = 128 * 1024 * 1024;
	char *dst = (char *)malloc(sizeof(char) * size);
	char *data = (char *)malloc(sizeof(char) * size);
    char *ft_dst = (char *)malloc(sizeof(char) * size);
	char *ft_data = (char *)malloc(sizeof(char) * size);

	__builtin___memset_chk (data, 'A', size, __builtin_object_size (data, 0));
	if (!dst)
		return (0);
    memmove(dst, data, size);
    //ft_memmove(ft_dst, ft_data, size);
    printf("memmove result:    %s \n", dst);

	ft_memmove(ft_dst, ft_data, size);
    printf("ft_memmove result:    %s \n", ft_dst);

    free(dst);
    free(data);
    free(ft_dst);
    free(ft_data);
	return (0);
}