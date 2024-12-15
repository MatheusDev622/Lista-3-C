#include <stdio.h>
#include <stdlib.h>
#define TAM 15
int main()
{
   float vet[TAM];
   float min,max;
   srand(time(NULL));
   
   puts("Gerando o vetor:\n");
   for(int i = 0;i<=15;i++){
       vet[i] = rand()%30;
       printf("termo %d: %.2f\n",i,vet[i]);
   }
   max = vet[0];
   min = vet[0];
   for(int i = 1;i<TAM;i++){
       if(vet[i]<min){
           min = vet[i];
       }else if(vet[i]>max){
           max = vet[i];
       }
   }
   float soma = max + min;
   printf("o maior número é: %.2f",max);
   printf("O menor número é: %.2f",min);
   printf("A soma do maior e menor termo do vetor é: %.2f",soma);
   return 0;
}