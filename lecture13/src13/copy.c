#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    string s = get_string("s: ");
    if (s == NULL)
    {
        return 1; 
    }

    char *t =  malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 2;
    }

    // copy the string
    strcpy(t, s);

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);
}