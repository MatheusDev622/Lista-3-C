#include <stdio.h>
#include <time.h>
#define TAM 100
int main(){
    int vet[TAM];
    int intervalo_min,intervalo_max;
    int aux;
    srand(time(NULL));
    puts("Digite o menor intervalo que irá compor o vetor:\n");
    scanf("%d",&intervalo_min);
    puts("Digite o maior valor do intervalo que irá compor o vetor:\n");
    scanf("%d",&intervalo_max);
    for(int i = 0;i<TAM;i++){
        vet[i] = intervalo_min + rand()%(intervalo_max-intervalo_min+1);
        printf("termo %d: %d\n",i,vet[i]);
    }

    for(int i = 0;i<TAM - 1;i++){
        for(int j = 0;j<TAM-i-1;j++){
            if(vet[j]>vet[j+1]){
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }   
    }
    printf("\nVetor ordenado:\n");
    for(int i = 0;i<TAM;i++){
        printf("%d,",vet[i]);
    }
    return 0;
}