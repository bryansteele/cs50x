#include <stdio.h>

void meow(int n);

int main(void)
{
    meow(13);
}

/*
int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}

//// My FUNCTION: No return value and no arguments
void meow(void)
{
    printf("meow\n");
}
*/

// if I want to take and argument in the function (don't forget to change the
// prototype at the top)
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}