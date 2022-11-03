#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

char the_chars[] = { 33, 0x80, 'Z' };

#define SIZE sizeof( the_chars ) / sizeof( char )

int main(void)
{
   unsigned long i;
    printf( "isascii result:\n" );
    for( i = 0; i < SIZE; i++ ) {
        if (isascii( the_chars[i] ) ) {
            printf( "Char %c is an ASCII character\n",
                the_chars[i] );
        } else {
            printf( "Char %c is not an ASCII character\n",
                the_chars[i] );
        }
    }
    printf( "ft_isascii result:\n" );
    for( i = 0; i < SIZE; i++ ) {
        if (ft_isascii( the_chars[i] ) ) {
            printf( "Char %c is an ASCII character\n",
                the_chars[i] );
        } else {
            printf( "Char %c is not an ASCII character\n",
                the_chars[i] );
        }
    }
   return (0);
}