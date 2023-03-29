#include <stdio.h>
#include <string.h>
#include "libft.h"

void test(int size)
{
    char string[] = "Hello there, Hiver";
    char buffer[] = "Hello there, Hiver buffer";
    int r;
    char ft_string[] = "Hello there, Hiver";
    char ft_buffer[] = "Hello there, Hiver buffer";
    int ftr;

    r = strlcpy(buffer, string, size);
    printf("strlcopy result:\n");
    printf("    Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
    ftr = ft_strlcpy(ft_buffer, ft_string, size);
    printf("ft_strlcopy result:\n");
    printf("    Copied '%s' into '%s', length %d\n",
            ft_string,
            ft_buffer,
            ftr
          );
}

int main()
{
    test(19);
    test(10);
    test(1);
    test(0);
    return(0);
}