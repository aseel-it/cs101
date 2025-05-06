#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int dollars = 1; 

    // ask user if he wants to invest it
    while (true)
    {
        char c =  get_char("You have %i dollars. do you want to re-invest? ", dollars);
        // if y, double the dollars
        if (c == 'y')
        {
            dollars *= 2;
        }
        //if n, print the dollars and exit the program
        else
        {
            break;
        }
    }
    printf("here are your dollars: %i\n", dollars);
}
