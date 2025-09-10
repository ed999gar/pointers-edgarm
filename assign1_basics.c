#include <stdio.h>

int main(void) {
    int x = 42;
    int *p = &x;

    printf("x=%d, &x=%p\n", x, (void*)&x);
    printf("p=%p, *p=%d\n", (void*)p, *p);

    *p = 77; 
    printf("after *p=77 -> x=%d, *p=%d\n", x, *p);
    return 0;
}
