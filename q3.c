#include<stdio.h>
#define TAM 100
int main(){
    char str[TAM];
    puts("Digite no máximo 100 caracteres: ");
    fgets(str,sizeof(str),stdin);
    int i = 0;
    while(str[i]!= '\0'){
        i++;
    }
    printf("Tamanho da string: %d",i-1);
    return 0;
}