#include <stdio.h>

int main(void){

    int n;

    puts("Type a number:");
    scanf("%i", &n);

    if(n >= 0){

        do{
            printf("%i", n % 10); 
            n /= 10;
        }while(n != 0);

        printf("\n");

    }else{
        
        n *= -1;

        printf("-");

        do{
            printf("%i", n % 10);
            n /= 10;
        }while(n!=0);

        printf("\n");

    }

    return 0;
}
