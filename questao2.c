#include <stdio.h>
#include <string.h>

int fatorial(int num){
    int resultado = 0, aux = 0;
    for(int i = num; i > 0; i--){
        aux = i * num;
        resultado = aux * i;
    }
    return resultado;
}

int main(){
    int num, resultado;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    printf("O fatorial do número digitado e: \n");
    resultado = fatorial(num);
    printf("%d", resultado);
}
