#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}

int main(void) {
    int x = 10, y = 20;
    printf("Before: x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("After:  x=%d, y=%d\n", x, y);
    return 0;
}
