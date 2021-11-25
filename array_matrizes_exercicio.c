#include <stdio.h>

int main(void){

    int i, j;
    float notas[4][4] = {0}, medias[4] = {0}, somatorio = 0;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){

            printf("Insira as notas do aluno %i\n", i + 1);
            scanf("%f", &notas[i][j]);
            somatorio += notas[i][j];

            if(j == 3){
                medias[i] = somatorio / 4;
                somatorio = 0;
            }
        }
        printf("\n");
    }

    for(i = 0; i < 4; i++){
        printf("Aluno %i: %.2f\n", i + 1, medias[i]);
    }    

    return 0;
}