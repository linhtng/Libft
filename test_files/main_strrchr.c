#include <stdio.h>
#include <string.h>
#include "libft.h"

void test(int c)
{
  char string[] = "haystack needle is found";
  char *p;
  char *ft_p;

  p = strrchr(string, c);
  ft_p = ft_strrchr(string, c);

  printf ("First occurrence of char %c in \"%s\" is located:\n%s\n", c, string, p);

  printf ("First occurrence of char %c in \"%s\" is located:\n%s\n", c, string, ft_p);
}

int main (void)
{
  test('d');
  test('n');
  test('\0');
  test('p');
  return 0; 
}