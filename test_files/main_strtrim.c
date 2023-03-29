#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
    char *str1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	printf("%lu\n", strlen(str1));
    char *str2 = " \n\t";
	char *ret = ft_strtrim(str1, str2);
    int lenret = ft_strlen(ret);
    printf("%s\n", ret);
    printf("%d\n", lenret);
    free(ret);
    return 0;
}