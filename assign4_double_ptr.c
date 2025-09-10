#include <stdio.h>

int main(void) {
    int x = 5;
    int *p = &x;
    int **pp = &p;

    printf("x=%d, *p=%d, **pp=%d\n", x, *p, **pp);
    *p = 15;   printf("after *p=15 -> x=%d\n", x);
    **pp = 25; printf("after **pp=25 -> x=%d\n", x);
    return 0;
}
