#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string strings[] = {"apple", "book", "cat", "zoo", "boot", "iron", "top hat" };

    string s = get_string("String: ");
    // search for string
    for (int i = 0; i < 7; i++ )
    {
        if (strcmp(s,strings[i]) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}