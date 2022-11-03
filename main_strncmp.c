#include <stdio.h>
#include <string.h>
#include "libft.h"

void test(size_t n)
{
    char *s1;
    char *s2;

    s1 = "\x12\xff\x65\x12\xbd\xde\xad";
    s2 = "\x12\x02";
    printf("string compare result of %s and %s is %d \n", s1, s2, strncmp(s1, s2, n));
    printf("string compare result of %s and %s is %d \n", s1, s2, ft_strncmp(s1, s2, n));
}

int main(void)
{
    test(1);
    //test(8);
}