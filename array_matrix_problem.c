#include <stdio.h>

int main(void){

    int i, j;
    float grade[4][4] = {0}, final_grade[4] = {0}, sum = 0;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){

            printf("Enter a grade: \n");
            scanf("%f", &grade[i][j]);
            sum += grade[i][j];

            if(j == 3){
                final_grade[i] = sum / 4;
                sum = 0;
            }
        }
        printf("\n");
    }

    printf("SCORE: \n\n");

    for(i = 0; i < 4; i++){
        printf("Student %i: %.2f\n", i + 1, final_grade[i]);
    }    

    return 0;
}
