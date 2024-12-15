#include <stdio.h>
#include <time.h>
#define TAM 3

int main(){
    int matriz[TAM][TAM];
    srand(time(NULL));
    for(int i = 0;i<TAM;i++){
        for(int j = 0;j<TAM;j++){
        matriz[i][j] = rand()%9;
        }
    }
    printf("Matriz gerada:\n");
    for(int i = 0;i<TAM;i++){
        for(int j = 0;j<TAM;j++){
            printf("[%2d]",matriz[i][j]);
        }
        printf("\n");
    }
    printf("Diagonal principal\n");
    for(int i = 0;i<TAM;i++){
        printf("%2d",matriz[i][i]);
    }
    return 0;
}