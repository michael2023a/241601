#include <stdio.h>

int main(void)
{
    int x = 5, y = 2;
    printf("x = %i, y = %i\n", x, y);
    // use pointer to swap
    int *t = &x, *s = &y;
    int temp = *t;
    *t = *s;
    *s = temp;
    printf("now x = %i, y = %i\n", x, y);
}
