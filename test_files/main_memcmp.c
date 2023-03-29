#include <stdio.h>
#include <string.h>
#include "libft.h"

void test(size_t n)
{
    char *s1;
    char *s2;

    s1 = "atoms\0abc";
    s2 = "atoms\0\0\0\0";

    printf("string compare result of %s and %s is %d \n", s1, s2, memcmp(s1, s2, n));
    printf("string compare result of %s and %s is %d \n", s1, s2, ft_memcmp(s1, s2, n));

}

int main(void)
{
    test(5);
    test(8);
}