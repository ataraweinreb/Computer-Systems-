#include <stdio.h>
int main() {
    int i;
    int x[] = {65, 66, 67, 68, 69};
    int *px = x;

    //this pointer points currently to the same location as
    //px, but their actions are different
    char *pc = (char * ) x;

    printf("px = %p\npc = %p \n", px, pc);

    //iterate through the array using the int * pointer
    for (i = 0; i < 5; i ++ ) {
        printf ( "%3d  ", *(px+i) );
    }
    printf("\n");

    //iterate through the array using the char * pointer
    for (i = 0; i < 5; i ++ ) {
        printf ( "%3d  ", *(pc+i) );
    }
    printf("\n");

    //now, let's cast those numbers to char
    for (i = 0; i < 5; i ++ ) {
        printf ( "'%c'  ", (char)*(px+i) );
    }
    printf("\n");

    for (i = 0; i < 5; i ++ ) {
        printf ( "'%c'  ", *(pc+i) ); //no need to cast, since pc is a char*
    }
    printf("\n");

    //let's print the actual values of the two pointers
    //as they are incremented

    for (i = 0; i < 5; i ++ ) {
        printf("px = %p\tpc = %p \n", px+i, pc+i);
    }
    printf("\n");

    return 0;
}
