#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
    long n = -2147483648;
	//int n = -54430;
    char    *res;

	res = ft_itoa(n);
	printf("%s\n", res);
    free(res);
    return 0;
}
