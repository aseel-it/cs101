#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string names[2];
    names[0] = "ALI";
    names[1] = "AHMAD";

    printf("%c\n%c\n%c\n", names[0][0], names[0][1], names[0][2]);
    printf("%c %c %c %c %c\n", names[1][0], names[1][1], names[1][2], names[1][3], names[1][4]);
}