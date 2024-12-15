#include<stdio.h>
#include<string.h>
#define TAM1 10
#define TAM2 10
int main(){
    char str1[TAM1], str2[TAM2];
    puts("Escreva a primeira string (max 10 caracteres):\n");
    fgets(str1,sizeof(str1),stdin);
    puts("Escreva a segunda string");
    fgets(str2,sizeof(str2),stdin);
    int comparacao = strcmp(str1,str2);
    if(comparacao == 0){
        printf("As strings são iguais");
    }else{
        printf("As strings não são iguais");
    }
    return 0;
}