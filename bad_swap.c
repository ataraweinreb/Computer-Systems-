#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int *tmp;
    tmp = a;
    a = b;
    b = tmp;
}
/*
 * Prove that this does not work.
 */
int main() {
    int x = 1;
    int y = 10;
    printf("x is %d, y is %d.\n", x, y);
    printf("Address of x is %p, y is %p.\n", &x, &y);
    swap(&x, &y);
    printf("x is %d, y is %d.\n", x, y);
    printf("Address of x is %p, y is %p.\n", &x, &y);
    return 0;
}
