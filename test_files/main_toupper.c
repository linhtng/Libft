#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <xlocale.h>
#include "libft.h"

void test(char *s)
{
    while(*s)
    {
        *s = (char)toupper((unsigned char)*s);
        s++;
    }
}

void ft_test(char *s)
{
    while(*s)
    {
        *s = (char)ft_toupper((unsigned char)*s);
        s++;
    }
}

int main()
{
    char sample[] = "abcdefghijklmnopqrstuvwxyz #1 TEXT\n";
    printf("Before:\n%s",sample);
    test(sample);
    printf("After toupper:\n%s",sample);

    char ft_sample[] = "abcdefghijklmnopqrstuvwxyz #1 TEXT\n";
    ft_test(ft_sample);
    printf("After ft_toupper:\n%s",ft_sample);

    return(0);
}