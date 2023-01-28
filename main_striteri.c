#include <stdio.h>
#include <string.h>
#include "libft.h"

void    f_striteri(unsigned int i, char *s) 
{ 
    *s = i + '0';
}
int main()
{
    char    s[] = "test";
    char    *res;

	ft_striteri(s, &f_striteri);
	printf("%s\n", s);
    free(res);
    return 0;
}