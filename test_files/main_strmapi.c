#include <stdio.h>
#include <string.h>
#include "libft.h"

char    f_test(unsigned int n, char c)
{
    c = n + '0';
    return (c);
}

int main()
{
    char    *s = "test";
    char    *res;

	res = ft_strmapi(s, &f_test);
	printf("%s\n", res);
    free(res);
    return 0;
}