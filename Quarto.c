#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}


int main()
{
    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    printf("Qual a sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu salario: ");
    scanf("%lf", &salario);

    printf("Digite sua altura: ");
    scanf("%lf", &altura);

    printf("Digite seu nome: ");
    limpar_entrada();
    fgets(nome, 50,stdin);


    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("NOME = %s\n", nome);

    return 0;
}

