#include <stdio.h>

int main(void){

    int n;

    puts("Type an integer:");
    scanf("%i", &n);

    if(n < 0){

        n *= -1;

        if(n % 2 == 0)
            puts("Parity: even");
        else if(n % 2 == 1)
            puts("Parity: odd");

    }else{

        if(n % 2 == 0)
            puts("Parity: even");
        else if(n % 2 == 1)
            puts("Parity: odd");

    }

    return 0;
}