#include <stdio.h>
#include <string.h>

int  ft_strncmp(char *s1, char *s2, unsigned int n);

int main (void)
{
 printf("%d\n", ft_strncmp("875", "873", 2));

 printf("%d\n", strncmp("875", "873", 2));
}