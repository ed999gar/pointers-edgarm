#include <stdio.h>

int main(void) {
    int a[5] = {1,2,3,4,5};
    int *p = a; 

    printf("Original: ");
    for (int i = 0; i < 5; i++) printf("%d ", *(p + i));
    printf("\n");

    for (int i = 0; i < 5; i++) *(p + i) += 10;  

    printf("Modified (via pointer): ");
    for (int i = 0; i < 5; i++) printf("%d ", *(p + i));

    printf("\nAlso via array name: ");
    for (int i = 0; i < 5; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
