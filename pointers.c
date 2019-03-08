#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, *p1, **p2, ***p3;
    num = 5;
    p1 = &num;
    p2 = &p1;
    p3 = &p2;

    printf("1: %d\n", *p1);
    printf("2: %d\n", p1);
    printf("3: %d\n", p1);
    printf("4: %p\n", **p2);
    printf("5: %d\n", **p2);
    printf("6: %d\n", ***p3);
    printf("7: %x\n", ***p3);
    printf("8: %d\n", &**p3);
    printf("9: %d\n", &*p3);
    printf("10: %d\n", &p3);
    printf("11: %d\n", *p1);
    printf("12: %p\n", p3);
    
    return 0;
}
