#include <stdio.h>
#include <locale.h>

int somar(int num1, int num2){
    return num1 + num2;
}

int mult(int num1, int num2){
    return  num2 * num2;
}

int sub(int num1, int num2){
    return num1 - num2;
}

int main(){
    int resultado_soma, resultado_mult, resultado_sub;
    int num_1, num_2;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num_1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num_2);

    if(num_1 < num_2){
        resultado_soma = somar(num_1, num_2);
        printf("A soma e: %d", resultado_soma);
    }

    else if(num_1 == num_2){
        resultado_mult = mult(num_1, num_2);
        printf("A Multiplicacao e: %d", resultado_mult);
    }
    else if(num_1 > num_2){
        resultado_sub = sub(num_1, num_2);
        printf("A diferenca e: %d", resultado_sub);
    }
}