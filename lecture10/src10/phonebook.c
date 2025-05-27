#include <cs50.h>
#include <stdio.h>
#include <string.h>

// TODO: make the search case-insensitive. if user for ahmad, it should also print 
// its number

int main(void)
{
    string names[] = {"Ahmad", "Ali", "Bilal", "Mahmood"};
    string numbers[] = {"079880980", "077543163", "070783713"};

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(name, names[i]) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}