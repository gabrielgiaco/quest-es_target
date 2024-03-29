#include <stdio.h>

int main() {
    int numero = 7, i = 0, fibonacci = 0, fibonacci2 = 1, soma;

    while (soma < numero){
        soma = fibonacci + fibonacci2;
        fibonacci = fibonacci2;
        fibonacci2 = soma;
        printf("%d\n", soma);
    }
    if ( soma == numero){
        printf("Pertence ao Fibonacci.");
    }else{
        printf("[%d] Nao pertence ao Fibonacci.", numero);
    }
}
