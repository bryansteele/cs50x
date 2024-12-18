#include <cs50.h> //CS50 environment only
#include <stdio.h>

/*int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%i\n", x + y);
}
*/

int add(int a, int b);

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%i\n", add(x, y));
}

// abstracted add function
int add(int a, int b)
{
    return a + b;
}
