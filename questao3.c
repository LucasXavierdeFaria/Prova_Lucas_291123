#include <stdio.h>
#include <string.h>

int media(int string_1[100], int string_2[100]){
    int tamanho_1, tamanho_2, media;
    tamanho_1 = strlen(string_1);
    tamanho_2 = strlen(string_2);
    return (tamanho_1 + tamanho_2) / 2;
}

int main(){
    char string_1[100], string_2[100];
    int resultado;

    printf("Digite a primeira palavra: \n");
    scanf("%s", &string_1);
    printf("Digite a segunda palavra: \n");
    scanf("%s", &string_2);

    printf("O tamanho media das duas e: \n");
    resultado = media(string_1[100], string_2[100]);
    printf("%d", resultado);
}
