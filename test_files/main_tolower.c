#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <xlocale.h>
#include "libft.h"

void test(char *s)
{
    while(*s)
    {
        *s = (char)tolower((unsigned char)*s);
        s++;
    }
}

void ft_test(char *s)
{
    while(*s)
    {
        *s = (char)ft_tolower((unsigned char)*s);
        s++;
    }
}

int main()
{
    char sample[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ #1 text\n";
    printf("Before:\n%s",sample);
    test(sample);
    printf("After tolower:\n%s",sample);

    char ft_sample[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ #1 text\n";
    ft_test(ft_sample);
    printf("After ft_tolower:\n%s",ft_sample);

    return(0);
} 