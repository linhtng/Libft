#include <stdio.h>
#include <string.h>
#include "libft.h"

void test(size_t n)
{
    char *s1;
    char *s2;
    char *p;
    char *ft_p;

    s1 = (void *)0;
    s2 = "fake";
    //p = strnstr(s1, s2, n);
    ft_p = ft_strnstr(s1, s2, n);

    //printf ("First occurrence of string %s within %zu characters of \"%s\" is:\n%s\n",s2, n, s1, p);
    printf ("First occurrence of string %s within %zu characters of  \"%s\" is:\n%s\n",s2, n, s1, ft_p);

}

int main(void)
{
    test(3);
    //test(15);
}