#include <stdio.h>
/*
  call by value
*/

void add(int x, int y)
{
    x = 99;
    y = 88;

    printf("Inside add function,\nx=%d\ny=%d\n", x,y);
}

int main(void)
{
    int x = 1;
    int y = 2;

    add(x, y);

    printf("\nOutside add,\nx = %d\ny = %d\n", x, y);
    return 0;
}
