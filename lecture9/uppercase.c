#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    string s = get_string("Before: ");  

    for (int i = 0, l = strlen(s); i < l; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}