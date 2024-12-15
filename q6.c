#include <stdio.h>
#include <string.h>
#define TAM 50
int main(){
    char str[TAM];
    puts("Digite uma string para ver o seu inverso(max 50 caracteres): ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';
    int len = strlen(str);
    puts("String invertida: ");
    for(int i = len-1;i>=0;i--){
        printf("%c",str[i]);
    }


}