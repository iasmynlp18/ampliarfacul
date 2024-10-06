#include <stdio.h>

int main()
{

    int idade;
    float salario;
    char sexo;

    printf("Informe sua idade: ");
    scanf("%d", &idade);
    getchar();

    printf("Informe seu salário: ");
    scanf("%f", &salario);
    getchar();

    printf("Informe M para Masculino e F para Feminino: ");
    scanf("%c", &sexo);
    getchar();

    printf("Tenho %d anos, recebo %.2f de salario e sou do sexo %c", idade, salario, sexo);

    return 0;
}