#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");  

    for (int i = 0, l = strlen(s); i < l; i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            printf("%c", s[i] - 32);
        }
        else 
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}