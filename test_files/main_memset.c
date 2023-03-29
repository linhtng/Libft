#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char str1[50];
    char str2[50];

    strcpy(str1,"This is test library function");
    strcpy(str2,"This is test ft_library function");
    memset(str1, '$', 6);
    printf("%s \n", str1);
    ft_memset(str2, '$', 6);
    printf("%s \n", str2);
	return (0);
}