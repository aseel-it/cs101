#include <cs50.h>
#include <stdio.h>

float average(int length, int list[]);

int main(void)
{
    const int N = 5;

    int score[N];

    // repeat three times
    for (int i = 0; i < N; i++){
        score[i] = get_int("score: ");
    }

    printf("Average: %f\n", average(N, score));
}







float average(int length, int list[])
{
   int sum = 0;
   for (int i = 0; i < length; i++)
   {
        sum = sum + list[i];
   }

   return sum / (float) length;
}