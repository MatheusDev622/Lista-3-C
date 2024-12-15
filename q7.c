#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#define TAM 3
int main(){
    float vet[TAM];
    float media_geo,media_arit;
    float soma = 0,produto = 1;
    srand(time(NULL));
    for(int i = 0;i<TAM;i++){
        vet[i] = rand()%20;
        soma += vet[i];
        produto *= vet[i];
        printf("Termo %d: %.1f\n",i,vet[i]);
    }
    media_arit = soma/3;
    media_geo = pow(produto,1.0/3.0);
    printf("A média aritmetica do vetor gerado é: %.2f\n",media_arit);
    printf("A média geométrica do vetor gerado é %.2f",media_geo);
    return 0;

}