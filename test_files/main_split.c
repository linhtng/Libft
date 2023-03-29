#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
    char *str1 = "      split       this for   me  ";
    char c = ' ';
	//char *ret = ft_split(str1, c);
    //int lenret = ft_strlen(ret);
    //printf("%s\n", ret);
    //printf("%d\n", lenret);
    //free(ret);
    char	*strim;
	char	deli[2];

	deli[0] = c;
    deli[1] = '\0';
	strim = ft_strtrim(str1, deli);
    printf("%s\n", strim);
    return 0;
}