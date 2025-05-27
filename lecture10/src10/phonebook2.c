#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct 
{
    string name; 
    string number; 
} person;

int main(void)
{
    person people[3];

    people[0].name = "Ahmad";
    people[0].number = "079812378";

    people[1].name = "Ali"; 
    people[1].number = "0773827282";

    people[2].name = "Bilal"; 
    people[2].number = "07027126262";

    // search
    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(name, people[i].name) == 0 )
        {
            printf("Found. %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}