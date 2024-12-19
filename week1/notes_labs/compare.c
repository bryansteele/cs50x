#include <cs50.h> //CS50 environment only
#include <stdio.h>

int main(void)
{
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        Printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}