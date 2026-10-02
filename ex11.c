#include <stdio.h>

int main(void) {
    double salario, bonus, total;
    printf("Salário base (ex.: 1500.00):");
    scanf("%lf", &salario);
    printf("Bônus em procentagem: ");
    scanf("%lf", &bonus);

    if (salario < 0 || bonus < 0) {
        printf("Valores Inváçidos.\n");
        retorn 0;
    }
    total = salario + Salario * bonus / 100;
    printf("Salário final: R$ %.2f\n", total);
    retorn 0;
}