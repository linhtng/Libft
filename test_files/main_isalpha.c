#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
    char c;
    c = 'L';
    printf("Result when uppercase alphabet is passed: %d", isalpha(c));
    printf("\nResult when uppercase alphabet is passed to ft_isalpha: %d", ft_isalpha(c));

    c = 'l';
    printf("\nResult when lowercase alphabet is passed: %d", isalpha(c));
    printf("\nResult when uppercase alphabet is passed to ft_isalpha: %d", ft_isalpha(c));

    c = '-';
    printf("\nResult when non-alphabetic character is passed: %d", isalpha(c));
    printf("\nResult when uppercase alphabet is passed to ft_isalpha: %d", ft_isalpha(c));

    return 0;
}
