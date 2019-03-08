#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, *p;
    x = 5;
    p = &x;
    p++;
    printf("%x\n", &x);
    printf("%x\n", &p);
    printf("%x\n", p);
    printf("%x\n", &x);
    return 0;
}
