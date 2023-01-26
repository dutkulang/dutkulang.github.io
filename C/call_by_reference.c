#include <stdio.h>

void add(int *x, int *y)
{
    *x = 55;
    *y = 66;

    printf("Inside the add function,\nx = %d\ny = %d\n", *x, *y);
}
int main(void)
{
    int x = 11;
    int y = 22;

    add(&x, &y);
    printf("\nOutside the add function,\nx = %d\ny = %d\n", x, y);
    return (0);
}
