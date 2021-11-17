#include <stdio.h>

int main(void){

    int i, j;

    for(i = 0; i < 5; i++){
        printf("i = %i\n", i);
        for(j = 1; j < 5; j++){
            printf("j = %i\n", j);
        }
    printf("\n");
    }

    return 0;
}