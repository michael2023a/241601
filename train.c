#include <stdio.h>

int main(void)
{
    int x = 1, y = 3;
    printf("x = %i, y = %i\n", x, y);
    int *t = &x, *s = &y;
    int temp = *t;
    *t = *s;
    *s = temp;
    printf("now x = %i, y = %i", x, y);
}
