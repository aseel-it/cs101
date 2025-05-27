#include <stdio.h>

int get_int(char *s);

int main(void)
{
    int n = get_int("n: ");
    printf("%i\n", n);
}

int get_int(char *s)
{
    int x; 
    printf("%s", s);
    scanf("%i", &x);
    return x;
}
