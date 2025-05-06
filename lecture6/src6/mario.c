// print square to the terminal
// author: ahmad

#include <stdio.h>
#include <cs50.h>

void print_col(int x);

int main(void) 
{
    int height = get_int("height: ");

    // print a square of # to the terminal
    for (int i = 0; i < height; i++)
    {
        print_col(height);
    }
}





void print_col(int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("#");
    }
    printf("\n");
}
