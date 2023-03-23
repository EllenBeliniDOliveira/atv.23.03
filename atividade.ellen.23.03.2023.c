#include <stdio.h>

int main()
{
    float matrix[4][4];
    int i,j, cont;
    
    for(i = 0; i < 4; i ++){
        for(j = 0; j <4; j ++){
            printf("\nDigite um numero real:");
            scanf("%f", &matrix[i][j]);
        }
    }
    float par, impar;
    float media;
    impar = 0;
    par = 0;
    cont= 0;
     for(i = 0; i < 4; i ++){
        for(j = 0; j <4; j ++){
            if( j % 2 == 0){
                par = par + matrix[i][j];
                 cont = cont + 1;
            }
            else{
                impar = impar + matrix[i][j];
            }
        }
    }
    media = impar/cont;
    printf("\nA soma dos valores das colunas impares é %f", impar);
    printf("\nA media dos valores das colunas pares é %f", media);
}
