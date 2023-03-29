#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main( void )
  {
    char str1[40];
    char str2[40];

    strcpy(str1,"This is test library function");
    strcpy(str2,"This is test ft_library function");
    bzero(str1, 1);
    printf("%s \n", str1);
    ft_bzero(str2, 1);
    printf("%s \n", str2);
	return (0);
  }
