#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int main() {
    char val1 = 's';
    char val2 = '8';
    char val3 = '$';
    char c;
    
    c = '?';
    printf("Result when char %c is passed: %d",c, isalnum(c));
    printf("\nResult when char %c is passed: %d\n",c, ft_isalnum(c));
   
    if (isalnum(val1))
        printf("The character %c is alphanumeric", val1);
    else
        printf("\nThe character %c is not alphanumeric", val1);
    if (ft_isalnum(val1))
        printf("\nThe character %c is alphanumeric", val1);
    else
        printf("\nThe character %c is not alphanumeric", val1);
    if (isalnum(val2))
        printf("\nThe character %c is alphanumeric", val2);
    else
        printf("\nThe character %c is not alphanumeric", val2);
    if (ft_isalnum(val2))
        printf("\nThe character %c is alphanumeric", val2);
    else
        printf("\nThe character %c is not alphanumeric", val2);
    if (isalnum(val3))
        printf("\nThe character %c is alphanumeric", val3);
    else
        printf("\nThe character %c is not alphanumeric", val3);
    if (ft_isalnum(val3))
        printf("\nThe character %c is alphanumeric", val3);
    else
        printf("\nThe character %c is not alphanumeric\n", val3);
    return 0;
}
