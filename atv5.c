#include <stdio.h>

int main() {
    float n1, n2, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &n1);

    printf("Informe a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) /2;

    if (media >= 8.0) 
    {
        printf("Aprovado! Media: %.1f", media);
    }
    else if (media >= 6.0) 
    {
        printf("Recuperação! Media: %.1f", media);
    }
    else 
        printf("Reprovado! Media: %.1f", media);

    return 0;
}