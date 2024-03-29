#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

char nome[100];
int tamanho;

printf("Digite o seu nome.\nR: ");
fgets(nome, sizeof(nome), stdin);

tamanho = strlen(nome);

    for(int i = tamanho - 1; i >= 0 ; i--){
        printf("%c", nome[i]);
    }

}
