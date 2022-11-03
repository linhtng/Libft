#include <stdio.h>
#include <string.h>
#include "libft.h"

void test(int c, size_t n)
{
    // embedded null byte
    const char s[] = "ABCDE\0abc";
    //Use of memchr to find 'c'
    char *ptr = memchr(s, c, n);
    if (ptr != NULL)
    {
        printf ("search character found:  %s\n", ptr);
    }
    else
    {
        printf ("search character not found\n");
    }
    //Use of ft_memchr to find 'c'
    char *ft_ptr = ft_memchr(s, c, n);
    if (ptr != NULL)
    {
        printf ("search character found:  %s\n", ft_ptr);
    }
    else
    {
        printf ("search character not found\n");
    }
}

int main (void)
{
    test('a', 500);
    test('f', 8);
    test('a', 5);
    return (0);
}
