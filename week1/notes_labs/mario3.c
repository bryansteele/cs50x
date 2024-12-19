#include <cs50.h> //CS50 environment only
#include <stdio.h>

int main(void)
{
    const int n = get_int("Size: ");
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}