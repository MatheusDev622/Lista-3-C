#include <stdio.h>
#define TAM 30
int main()
{
    char str[TAM];
    char letra;
    puts("Digite uma string:\n");
    scanf("%s",str);
    puts("Digite um caracter:\n");
    getchar();
    scanf("%c",&letra);
    int encontrar = 0;
    
    for(int i = TAM;i<TAM;i++){
        if(str[i] == letra){
            encontrar = 1;
            break;
        }
       
    }
    
    if(encontrar){
        printf("A letra %c está na string!\n",letra);
    }else{
        printf("A letra '%c' não está na string!\n",letra);
    }
    return 0;
}