#include <stdio.h>
#include <string.h>
#define TAM1 100
#define TAM2 100
int main(){
    char str1[TAM1],str2[TAM2];
    puts("Digite ate 100 caracteres máx:");
    fgets(str1,sizeof(str1),stdin);
    puts("Digite ate 100 caracteres máx:");
    fgets(str2,sizeof(str2),stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    strcat(str1,str2);
    puts(str1);
    return 0;
}