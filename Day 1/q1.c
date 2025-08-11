//swapping using pointers
#include <stdio.h>

void swap(int *x, int *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main() {
    int a, b;

    printf("Enter 1st value: ");
    scanf("%d", &a);

    printf("Enter 2nd value: ");
    scanf("%d", &b);

    printf("\nNumber 1 before swap: %d", a);
    printf("\nNumber 2 before swap: %d", b);

    swap(&a, &b);

    printf("\nNumber 1 after swap: %d", a);
    printf("\nNumber 2 after swap: %d", b);
    printf("\n");

    return 0;
}
