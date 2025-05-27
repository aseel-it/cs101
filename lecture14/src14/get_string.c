#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s;
    s =  malloc(1000000000);
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
    scanf("%s", s);
}