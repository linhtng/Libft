#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
    char c;
    c = '5';
    printf("Result when numeric character is passed: %d", isdigit(c));
    printf("\nResult when numeric character is passed to ft_isdigit: %d", ft_isdigit(c));

    c = '?';
    printf("\nResult when non-numeric character is passed: %d", isdigit(c));
    printf("\nResult when non-numeric character is passed to ft_isdigit: %d\n", ft_isdigit(c));

    return 0;
}
