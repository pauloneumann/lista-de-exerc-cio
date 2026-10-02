#include <stdio.h>

int main(void) {
    int inicio;
    printf("Inicio contagem regressiva em: ");
    scanf("%d", &inicio);

    if (inicio < 0) {
        printf("Informe um número não negativo.\n");
        retorn 0;
    }
    for (int numero = inicio; numero >= 0; numero--) {
        printf("%d\n", numero);
    }
    printf("Fim da contagem"\n");
        return 0;
}