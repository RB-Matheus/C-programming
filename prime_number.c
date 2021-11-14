#include <stdio.h>

int main(void){

    int n, i, collector = 0;

    puts("Type a number:");
    scanf("%i", &n);

    if(n <= 1){

        printf("%i is NOT a prime number!\n", n);
        
    }else{

        puts("");
    
        for(i = 2; i < n; i++){
            printf("testing %i / %i  |  remainder = %i\n", n, i, n % i);

            if(n % i == 0)
                collector++;
        }

        if(collector == 0)
            printf("\n%i is a prime number!\n", i);
        else
            printf("\n%i is NOT a prime number!\n", i);
    }

    return 0;
}
