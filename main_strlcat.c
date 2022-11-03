#include <stdio.h>
#include <string.h>
#include "libft.h"

void test(int dstsize)
{
    char dst[] = "!";
    char src[] = "HelloWorld!";
    int r;
    char ft_dst[] = "!";
    char ft_src[] = "HelloWorld!";
    int ftr;
    char buffer[dstsize];
    char ft_buffer[dstsize];

    strcpy(buffer,dst);
    strcpy(ft_buffer,ft_dst);

    r = strlcat(buffer, src, dstsize);
    printf("strlcat result:\n");
    printf(" Cat result '%s' length %d\n",
            buffer,
            r
          );
    if(r >= dstsize)
        puts(" String truncated");
    else
        puts(" String was fully copied");

    ftr = ft_strlcat(ft_buffer, ft_src, dstsize);
    printf("ft_strlcat result:\n");
    printf(" ft_Cat result '%s' length %d\n",
            ft_buffer,
            ftr
          );
    if(ftr >= dstsize)
        puts(" String truncated");
    else
        puts(" String was fully copied");

    /*char b[0xF] = "nyan !";

	r = strlcat(((void *)0), b, 0);
    printf(" Cat result %d\n", r);*/
}

int main()
{
    //size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + strlen("there is no stars in the sky");
    //printf("%zu\n", max);
    test(100);
    //test(65);
    //test(1);
    //test(0);
    /*size_t r;
    char b[0xF] = "nyan !";
    r = ft_strlcat(((void *)0), b, 2);
    printf("%zu\n", r);*/
    return(0);
}