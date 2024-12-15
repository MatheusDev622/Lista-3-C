#include <stdio.h>
#include<string.h>
#define TAM1 100
#define TAM2 100
int main(){
    char str1[TAM1], str2[TAM2];
    puts("Digite alguma coisa para realizar a concatenação dessa string(máx 100 caracteres):");
    fgets(str1,sizeof(str1),stdin);
    puts("Digite alguma coisa para realizar a concatenação dessa string:");
    fgets(str2,sizeof(str2),stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int i = 0;
    while(str1[i] != '\0'){
        i++;
    }

    int j = 0;
    while(str2[j] != '\0'){
        str1[i] = str2[j];
        i++;
        j++;
    }

    printf("A string concatenada é:\n%s",str1);
    return 0;
}