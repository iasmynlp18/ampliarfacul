#include <stdio.h>

int main() {
    float n1, n2, result;

    printf("Informe a primeira nota: ");
    scanf("%f", &n1);

    printf("Informe a segunda nota: ");
    scanf("%f", &n2);

    result = (n1 + n2) /2;

    printf("A media das notas e de %.2f", result);

    return 0;
}