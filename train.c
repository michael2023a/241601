#include <stdio.h>

int main(void)
{
    int x = 1, y = 3;
    printf("x = %i, y = %i\n", x, y);
    int temp = x;
    x = y;
    y = temp;
    printf("now x = %i, y = %i", x, y);
}
