#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
    int i;
    int count;

    i = 0;
    count = 0;
    printf( "isascii result:\n" );
    while (i < 256)
    {
        if (isprint(i) != 0)
        {
            printf("%c", i);
            count++;
        }
        i++;
    }
    printf("\nThere are total %d printable characters.\n", count);
    printf( "ft_isascii result:\n" );
    i = 0;
    count = 0;
    while (i < 256)
    {
        if (ft_isprint(i) != 0)
        {
            printf("%c", i);
            count++;
        }
        i++;
    }
    printf("\nThere are total %d printable characters.\n", count);
    return(0);
}