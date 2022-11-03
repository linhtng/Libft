#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

int main()
{
    char *str = "01234";
	size_t size = 10;
	char *ret = ft_substr(str, 10, size);
 
    printf("%s\n", ret);
    free(ret);
    return 0;
}