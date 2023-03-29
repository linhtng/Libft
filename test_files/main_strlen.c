#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char *str;

    str = "Hellooo";
    printf("ft_Length of %s is %d \n", str, ft_strlen(str));
    printf("Length of %s is %lu \n", str, strlen(str));
	return 0;
}