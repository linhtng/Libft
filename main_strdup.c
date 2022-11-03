#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strdup(char *src);

int main(void)
{
    char *str;
    char *ft_str;
    char *lib_str;

    str = "test string :)";
    ft_str =  ft_strdup(str);
    lib_str = strdup(str);
    printf("ft_Dup string of the string %s is %s \n", str, ft_str);
    printf("libDup string of the string %s is %s \n", str, lib_str);
    free(ft_str);
    free(lib_str);
    return (0);
}
