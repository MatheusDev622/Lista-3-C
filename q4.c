#include<stdio.h>
#include<string.h>
#define TAM1 10
#define TAM2 10
int main(){
    char str1[TAM1], str2[TAM2];
    int iguais = 1;
    puts("Escreva a primeira string (max 10 caracteres):\n");
    fgets(str1,sizeof(str1),stdin);
    puts("Escreva a segunda string\n");
    fgets(str2,sizeof(str2),stdin);
    int i = 0;
    
    while(str1[i] != '\0' || str2[i] != '\0'){
        if(str1[i] != str2[i]){
            iguais = 0;
            break;
        }
        i++;
    }
    if(iguais){
        printf("As strings são iguais");
    }else{
        printf("As strings não são iguais");
    }
    return 0;
}