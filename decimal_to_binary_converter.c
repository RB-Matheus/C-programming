#include <stdio.h>


void convert(int number){
    
    int binary[32], i = 0, aux = number;
    
    while (number > 0){
        binary[i] = number % 2;
        number /= 2;
        i++;
    }
    
    printf("%d in binary is ", aux);
    for (int j = i - 1; j >= 0; j--){
        printf("%d", binary[j]);
    }
    printf("\n");
    
}

int main(void){
    
    int number;
    printf("Enter the number you want to convert from decimal to binary: ");
    scanf("%d", &number);
    convert(number);
    
}