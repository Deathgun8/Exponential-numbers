#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int i, num, exp, res;

    printf("Escreva um numero e a potencia que voce deseja elevalo \n");
    scanf("%d", &num);
    scanf("%d", &exp);

    if (exp < 0) {
        printf("Numero invalido, digite um numero positivo");
    } else if (exp == 0) {
        printf("Qualquer numero elevado a 0 e igual a 1.");
    } else if (exp == 1) {
        printf("%d", num);
    } else {
        res = num * num;
        for (i = 2; i < exp; i++) {
            res = res * num;
        } 
        printf( "%d", res);
    } 
}