#include <stdio.h>
#include <string.h>

void media(char string[100][100]){
    int resultado = 0, media;
    for(int i = 0; i < 4; i++){
        resultado = resultado + strlen(string[100][i]);
    }
    media = resultado / 4;
    printf("%d", media);
}

int main(){
    char string[100][100] = {"Lucas", "Xaviere", "De", "Farias"};
    int resultado;

    for(int i = 0; i < 100; i++){
        for(int y = 0; y < 100; i++){
            if(string == ' '){
                string[i][y] = '\0';
            }
        }
    }

    printf("O resultado da media entre as strings e: \n");
    media(string);
}
