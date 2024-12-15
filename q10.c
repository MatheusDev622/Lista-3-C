#include <stdio.h>
#include <time.h>
#define TAM 3

int main(){
    int matriz[TAM][TAM];
    int x;
    srand(time(NULL));
    puts("Digite um valor para que seja encontrado na matriz: ");
    scanf("%d",&x);
    for(int i = 0;i<TAM;i++){
        for(int j = 0;j<TAM;j++){
        matriz[i][j] = rand()%8;
        }
    }
    printf("Matriz gerada:\n");
    for(int i = 0;i<TAM;i++){
        for(int j = 0;j<TAM;j++){
            printf("[%2d]",matriz[i][j]);
        }
        printf("\n");
    }
    int encontrado = 0;
    int quant_x = 0;
    for(int i = 0;i<TAM;i++){
        for(int j = 0;j<TAM;j++){
            if(matriz[i][j] == x){
               encontrado = 1;
               quant_x += 1;
            }
        }
    }
    if(encontrado){
        printf("o número %d está na matriz e apareceu %d vezes",x,quant_x);
    }else{
        printf("O número %d não está na matriz",x);
    }
    return 0;
}