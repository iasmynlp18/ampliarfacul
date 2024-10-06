#include <stdio.h>

int main() {
    float cels,fahri;

    printf("Informe o valor da temperatura em Celsius: ");
    scanf("%f", &cels);

    fahri = cels * 1.8 + 32;

    printf("A temperatura em Fahrenheiht e de %.2f", fahri);

    return 0;
}