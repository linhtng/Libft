#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

int main()
{
    char *str1 = "hello ";
	char *str2 = "goodbye";
	char *ret = ft_strjoin(str1, str2);
 
    printf("%s\n", ret);
    free(ret);
    return 0;
}