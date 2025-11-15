// TIMOLA, MHALON PARKER R.
#include <stdio.h>

int main() {
    int i = 0;
    // While loop
    printf("While Loop: \n");
    while (i < 10){
        i++;
        printf("%d\n", i);
    }
    //Do while loop
    printf("Do/While loop:\n");
    int f = 0;
    do {
        printf("%d\n", f);
        f++;
    } while (f < 6);
    //For loop
    printf("For loop:\n");
    int g;
    for (g = 1; g <= 20; g++){
        if (g % 2 == 0){
            printf("%d\n", g);
        }
    }

    return 0;
}