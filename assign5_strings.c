#include <stdio.h>
#include <stddef.h>

int main(void) {
    char str[] = "Hello";
    char *p = &str[0];

    printf("Chars: ");
    for (char *q = p; *q; ++q) putchar(*q);
    putchar('\n');

    size_t count = 0;
    for (char *q = str; *q; ++q) ++count;
    printf("Length by pointer arithmetic: %zu\n", count);
    return 0;
}
