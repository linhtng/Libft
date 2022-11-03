#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

void    test(char *str)
{
	int i1 = atoi(str);
	int i2 = ft_atoi(str);
    printf("lib atoi is %d and ft_atoi is %d\n", i1, i2);
}

int	main(void)
{
	char str[] = "-2147483648";
	test(str);
    
    /*int a = INT_MAX;
    int amin = INT_MIN;

    printf("%d\n", a);
    printf("%d\n", amin);*/
	
    return 0;
}
