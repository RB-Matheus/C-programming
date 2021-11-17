#include <stdio.h>

int main(void){

    /*      consider that if you pay in cash 
     *      then the product is 60% off. 
     *  
     *      Otherwise it'll cost 10% more.  
     */ 

    char choice;
    float price = 100.00;

    puts("Are you paying in cash?  [ y | n ]");
    scanf("%c", &choice);

    if(choice == 'y' || choice == 'n')
        choice == 'y' ? printf("US$ %.2f\n", 0.40 * price) : printf("US$ %.2f\n", 1.10 * price);
    else
        puts("Please, make sure you choose between 'y' and 'n';)");

    return 0;
}