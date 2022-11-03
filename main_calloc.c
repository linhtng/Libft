#include "libft.h"
#include <stdio.h>

void test(size_t n)
{
    int i, * ptr, sum = 0;
    ptr = ft_calloc(n, sizeof(int));
    if (ptr == NULL)
        printf("Error! memory not allocated.");
    else {
        // Memory has been successfully allocated
        printf("Memory successfully allocated using ft_calloc.\n");
        printf("The initial elements of the array are: ");
        // Print the initial elements of the array, should all be 0
        for (i = 0; i < n; ++i) {
            printf("%d ", ptr[i]);
        }
        // Assigned values to the elements of the array, from 1 to 10
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }
 
        // Print the elements of the array
        printf("\nThe elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d ", ptr[i]);
        }
    }
    free(ptr);
}

int main(void)
{
    test(6);
    return 0;
}